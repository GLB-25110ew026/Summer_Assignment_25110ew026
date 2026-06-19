//WAP to add matrices.
#include <stdio.h>
int main()
{
    int i,j,rows,columns,matrix_A[5][5],matrix_B[5][5],sum_matrix[5][5];
    printf("Enter the number of rows= ");
    scanf("%d",&rows);
    printf("Enter the number of columns= ");
    scanf("%d",&columns);
    printf("Enter the elements for matrix_A:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("Enter element A[%d][%d]= ",i,j);
            scanf("%d",&matrix_A[i][j]);
        }
    }
    printf("Enter elements for matrix_B:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("Enter element B[%d][%d]= ",i,j);
            scanf("%d",&matrix_B[i][j]);    
        }        
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            sum_matrix[i][j]=matrix_A[i][j]+matrix_B[i][j];
        }
    }
    printf("The resultant matrix is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",sum_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}