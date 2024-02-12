#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

void display_elf_header(int fd);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char e_ident);
void print_data(unsigned char e_ident);
void print_version(unsigned char e_ident);
void print_osabi(unsigned char e_ident);
void print_abiversion(unsigned char e_ident);
void print_type(uint16_t e_type);
void print_entry(uint64_t e_entry, unsigned char class);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        fprintf(stderr, "Error opening file: %s\n", argv[1]);
        exit(98);
    }

    display_elf_header(fd);

    close(fd);
    return 0;
}

void display_elf_header(int fd) {
    unsigned char e_ident[EI_NIDENT];
    ssize_t read_bytes;

    // Read the initial bytes to check the ELF magic number
    read_bytes = read(fd, e_ident, EI_NIDENT);
    if (read_bytes != EI_NIDENT || 
        e_ident[EI_MAG0] != ELFMAG0 || 
        e_ident[EI_MAG1] != ELFMAG1 || 
        e_ident[EI_MAG2] != ELFMAG2 || 
        e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Error: Not a valid ELF file\n");
        exit(98);
    }

    // Display ELF header information
    print_magic(e_ident);
    print_class(e_ident[EI_CLASS]);
    print_data(e_ident[EI_DATA]);
    print_version(e_ident[EI_VERSION]);
    print_osabi(e_ident[EI_OSABI]);
    print_abiversion(e_ident[EI_ABIVERSION]);

    // Depending on the class, read the appropriate ELF header
    if (e_ident[EI_CLASS] == ELFCLASS32) {
        Elf32_Ehdr header;
        lseek(fd, 0, SEEK_SET); // Reset file pointer to read the header
        if (read(fd, &header, sizeof(header)) != sizeof(header)) {
            fprintf(stderr, "Error reading ELF header\n");
            exit(98);
        }

        print_type(header.e_type);
        print_entry(header.e_entry, e_ident[EI_CLASS]);
    } else if (e_ident[EI_CLASS] == ELFCLASS64) {
        Elf64_Ehdr header;
        lseek(fd, 0, SEEK_SET); // Reset file pointer to read the header
        if (read(fd, &header, sizeof(header)) != sizeof(header)) {
            fprintf(stderr, "Error reading ELF header\n");
            exit(98);
        }

        print_type(header.e_type);
        print_entry(header.e_entry, e_ident[EI_CLASS]);
    } else {
        fprintf(stderr, "Unsupported ELF class\n");
        exit(98);
    }
}

void print_magic(unsigned char *e_ident) {
    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}

void print_class(unsigned char e_ident) {
    printf("Class:                             ");
    switch (e_ident) {
        case ELFCLASS32: printf("ELF32\n"); break;
        case ELFCLASS64: printf("ELF64\n"); break;
        default: printf("Invalid class\n");
    }
}

void print_data(unsigned char e_ident) {
    printf("Data:                              ");
    switch (e_ident) {
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
        default: printf("Invalid data encoding\n");
    }
}

void print_version(unsigned char e_ident) {
    printf("Version:                           ");
    switch (e_ident) {
        case EV_CURRENT: printf("1 (current)\n"); break;
        default: printf("Invalid version\n");
    }
}

void print_osabi(unsigned char e_ident) {
    printf("OS/ABI:                            ");
    switch (e_ident) {
        case ELFOSABI_NONE: printf("UNIX - System V\n"); break;
        // Add cases for other OS/ABI values as needed
        default: printf("Unknown (%x)\n", e_ident);
    }
}

void print_abiversion(unsigned char e_ident) {
    printf("ABI Version:                       %u\n", e_ident);
}

void print_type(uint16_t e_type) {
    printf("Type:                              ");
    switch (e_type) {
        case ET_NONE: printf("NONE (No file type)\n"); break;
        case ET_REL: printf("REL (Relocatable file)\n"); break;
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
        case ET_DYN: printf("DYN (Shared object file)\n"); break;
        case ET_CORE: printf("CORE (Core file)\n"); break;
        default: printf("Unknown\n");
    }
}

void print_entry(uint64_t e_entry, unsigned char class) {
    printf("Entry point address:               ");
    if (class == ELFCLASS32) {
        printf("0x%x\n", (uint32_t)e_entry);
    } else if (class == ELFCLASS64) {
        printf("0x%lx\n", e_entry);
    }
}
