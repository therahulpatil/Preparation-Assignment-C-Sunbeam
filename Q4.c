#include<stdio.h>
int main()
{
    // grade
    float s1,s2,s3,s4,s5;
    printf("Enter marks of five sub: \n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    float total = (s1+s2+s3+s4+s5)/5;
    printf("Toatal mark : %.2f",total);

    if(total>=90) printf("\n Grade Ex");
    else if (total >=80 && total<90) printf("\n Grade A");
    else if (total >=70 && total<80) printf("\n Grade B");
    else if (total >=60 && total<70) printf("\n Grade C");
    else printf("\n Grade F");

    return 0;
}