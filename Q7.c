#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num;

    if (argc < 2) {
        printf("Enter number in command line\n");
    }
    else
    {
        num = atoi(argv[1]);  

        for (int i = 1; i <= 10; i++) 
        {
          printf("%d\n", num*i);

        }
    }
    return 0;
}