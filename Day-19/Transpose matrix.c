//WAP to find transpose of a matrix.
#include <stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter the number of rows= ");
    scanf("%d",&m);
    printf("Enter the number of columns= ");
    scanf("%d",&n);
    int matrix[m][n],transpose_matrix[n][m];
    printf("Enter the elements for the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element [%d][%d]= ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            transpose_matrix[j][i]=matrix[i][j];
        }
    }
    printf("The transpose of the matrix :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",transpose_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}