# Assignment 6 : Virtual memory management
It aims to implement a basic memory management module that customizes <code>memory allocation and deallocation</code> for large-scale real-world systems. Such systems often have their memory management modules and do not rely on the OS for memory management. Here, we created our memory management library — a header file <code>“goodmalloc.h”</code> and an implementation file <code>“goodmalloc.c”</code> with following functionalities:

- <code>createMem</code> : creates a _memory segment_, which is used at the beginning to allocate space for the code written using this library. It returns a big array of memory blocks.
- <code>createList</code> : creates a linked list of elements in the memory created by createMem() using local addresses, which are converted to suitable addresses for data access; the memory allocation uses _First Fit_ or _Best Fit_ and local variables are freed up before returning from a function using a global stack for bookkeeping.
- <code>assignVal</code> : updates a specified range of elements in a locally managed linked list with an array of values and returns an error if the size of the array doesn't match the number of elements to be updated.
- <code>freeElem</code> : free the memory of local variables, should be called before returning or explicitly, and raises an error if an invalid local address is provided.
