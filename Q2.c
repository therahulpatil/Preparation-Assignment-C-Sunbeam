#include<stdio.h>
int main()
{

    int num,fact=1;
    printf("Enter Number : ");
    scanf("%d",&num);
    while (num>1)
    {
        fact = fact*num;
        num--;
    }
    printf("Factorial is : %d",fact );

    
}