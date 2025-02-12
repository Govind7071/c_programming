#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc - argument count
    // argv - argument vector (array of strings)

    // Display the number of arguments
    printf("Number of arguments passed: %d\n", argc);

    // Display each argument passed
    printf("The arguments passed are:\n");
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}