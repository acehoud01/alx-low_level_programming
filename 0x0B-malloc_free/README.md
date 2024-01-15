Malloc and Free

malloc:

Definition: Stands for "memory allocation." It is used to allocate a specified number of bytes in memory.
Syntax: void* malloc(size_t size);
Explanation: It takes the number of bytes to allocate as an argument and returns a pointer to the beginning of the allocated memory block. The memory content is not initialized.
free:

Definition: Used to deallocate memory previously allocated by malloc or calloc.
Syntax: void free(void* ptr);
Explanation: It takes a pointer to the memory block previously allocated by malloc and releases that memory, making it available for future allocations.
