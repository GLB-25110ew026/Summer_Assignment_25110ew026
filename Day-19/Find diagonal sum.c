//WAP to find diagonal sum of a matrix.
#include <stdio.h>
int main()
{
    int i,j,size,matrix[5][5],sum=0;
    printf("Enter the size of the square matrix= ");
    scanf("%d",&size);
    printf("Enter the elements for the matrix:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("Element [%d][%d]= ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<size;i++)
    {
        sum=sum+matrix[i][i];
    }
    printf("The sum of the diagonal elements is : %d\n",sum);
    return 0;
}