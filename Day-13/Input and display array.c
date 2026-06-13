//WAP to input and display an array.
#include <stdio.h>
int main()
{
    int i,size;
    printf("Enter the size of array= ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements:\n",size);
    for(i=0;i<size;i++)
    {
        printf("element %d= ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Elements in the array are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}