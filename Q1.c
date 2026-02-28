#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, max;

    if (argc < 2) {
        printf("Enter numbers in command line\n");
        return 0;
    }

    max = atoi(argv[1]);  

    for (i = 2; i < argc; i++) {
        if (atoi(argv[i]) > max) {
            max = atoi(argv[i]);
        }
    }

    printf("Maximum = %d\n", max);

    return 0;
}