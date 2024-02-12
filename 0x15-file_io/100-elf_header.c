#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_elf_header(const char* filename) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        exit(98);
    }

    Elf64_Ehdr elf_header;
    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        perror("Error reading ELF header");
        close(fd);
        exit(98);
    }

    printf("Magic: ");
    for (int i = 0; i < EI_NIDENT; ++i) {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\nClass: %s\n", (elf_header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("Data: %s\n", (elf_header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "Unknown");
    printf("Version: %d (current)\n", elf_header.e_version);
    printf("OS/ABI: %s\n", (elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Unknown");
    printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("Type: %s\n", (elf_header.e_type == ET_DYN) ? "DYN (Position-Independent Executable file)" : "Unknown");
    printf("Machine: %s\n", (elf_header.e_machine == EM_X86_64) ? "Advanced Micro Devices X86-64" : "Unknown");
    printf("Entry point address: 0x%lx\n", (unsigned long)elf_header.e_entry);

    close(fd);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    display_elf_header(argv[1]);
    return 0;
}
