#include<stdio.h>
int main()
{
    int mtx1[3][3], mtx2[3][3];
    printf("Enter elements of matrix1 3*3 \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter [%d][%d] Element : ",i,j);
            scanf("%d",&mtx1[i][j]);
        }
        
        
    }
    printf("Enter elements of matrix2 3*3 \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter [%d][%d] Element : ",i,j);
            scanf("%d",&mtx2[i][j]);
        }
        
        
    }
    printf("Matrix1 * Matrix2 \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ",mtx1[i][j]);
        }
        
        printf("\n");
    }

    printf("\n*\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ",mtx2[i][j]);
        }
        printf("\n");   
    }

    printf("\n=\n");

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t",mtx1[i][j]*mtx2[i][j]);
        }
        printf("\n");   
    }










    
    

return 0;
}