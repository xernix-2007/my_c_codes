#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    // allocate memory for 5 integers, all set to 0
    ptr = (int*) calloc(n, sizeof(int));

    // print the values (should be 0 initially)
    printf("Initial values:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // assign values
    for(int i = 0; i < n; i++) {
        ptr[i] = (i+1) * 10;
    }

    // print after assignment
    printf("\nAfter assigning:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);  // release memory
    return 0;
}
