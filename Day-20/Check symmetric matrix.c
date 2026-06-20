//WAP to check symmetric matrix.
#include <stdio.h>
int main() 
{
    int rows,columns,i,j,matrix[10][10],symmetric=1;
    printf("Enter the number of rows= ");
    scanf("%d",&rows);
    printf("Enter the number of columns= ");
    scanf("%d",&columns);
    if(rows!=columns)
    {
        printf("The given matrix is not a symmetric matrix.");
        return 0;
    }
    printf("Enter the elements for the matrix:\n");
    for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++) 
        {
            printf("Element [%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<rows;i++) 
    {
        for(j=0;j<columns;j++) 
        {
            if(matrix[i][j]!=matrix[j][i]) 
            {
                symmetric=0; 
                break;          
            }
        }
        if(symmetric==0) 
        {
            break; 
        }
    }
    if(symmetric==1) 
    {
        printf("The given matrix is a symmetric matrix.");
    }
    else 
    {
        printf("The given matrix is not a symmetric matrix.");
    }
    return 0;
}