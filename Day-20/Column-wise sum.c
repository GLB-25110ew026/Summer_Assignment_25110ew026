//WAP to find column-wise sum of a matrix.
#include <stdio.h>
int main() 
{
    int rows,columns,i,j,matrix[10][10],sum;
    printf("Enter the number of rows= ");
    scanf("%d",&rows);
    printf("Enter the number of columns= ");
    scanf("%d",&columns);
    printf("Enter the elements for the matrix:\n");
    for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++) 
        {
            printf("Element [%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("The column-wise sum of the matrix is:\n");
    for(j=0;j<columns;j++)
    {
        sum=0;
        for(i=0;i<rows;i++)
        {
            sum=sum+matrix[i][j];
        }
        printf("The sum of the elements of column %d = %d.\n",j+1,sum);
    }
    return 0;
}    