#include<stdio.h>
int main( )
{
    int n, f1=0,f2=1,f3;
    printf("Enter Fib length : ");
    scanf("%d",&n);
    printf("Fibonachi Series : %d %d",f1,f2);
    for (int i = 2; i < n; i++)
    {
        f3 = f1+f2;
        f1=f2;
        f2=f3;
        printf(" %d",f3);
    }
    


}