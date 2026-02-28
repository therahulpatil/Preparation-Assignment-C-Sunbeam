#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);
    printf("%d \n",length);
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("String is a Palindrome\n");
    else
        printf("String is not a Palindrome\n");

    return 0;
}