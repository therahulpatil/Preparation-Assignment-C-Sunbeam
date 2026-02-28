#include<stdio.h>
void main()
{
char ch;
printf("Enter any Character ");
scanf("%c",&ch);
printf("Character ' %c ' is ", ch);
if (ch>= 'A' && ch <= 'Z') printf("Uppercase");
else if (ch>= 'a' && ch <= 'z') printf("Lowercase");
else if (ch>= '0' && ch <= '9') printf("Number");
else  printf("From other characters");


}