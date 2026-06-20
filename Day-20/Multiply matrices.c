//WAP to multiply matrices.
#include <stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k,matrix_A[10][10],matrix_B[10][10],matrix_C[10][10];
    printf("Enter the number of rows for the first matrix= ");
    scanf("%d",&r1);
    printf("Enter the number of columns for the first matrix= ");
    scanf("%d",&c1);
    printf("Enter the number of rows for the second matrix= ");
    scanf("%d",&r2);
    printf("Enter the number of columns for the second matrix= ");
    scanf("%d",&c2);
    if(c1!=r2)
    {
        printf("Multiplication not possible since the number of columns in the first matrix is not equal to the number of rows in the second matrix.\n");
        return 0;
    }
    printf("Enter the elements for the first matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&matrix_A[i][j]);
        }
    }
    printf("Enter the elements for the second matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&matrix_B[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            matrix_C[i][j]=0;
            for(k=0;k<c1;k++)
            {
                matrix_C[i][j]=matrix_C[i][j]+matrix_A[i][k]*matrix_B[k][j];
            }
        }
    }
    printf("The resultant matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",matrix_C[i][j]);
        }
        printf("\n");
    }
    return 0;  
}
