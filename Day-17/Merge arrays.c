//WAP to merge arrays.
#include <stdio.h>
int main()
{
    int i,n1,n2,n;
    printf("Enter the size of the first array= ");
    scanf("%d",&n1);
    int arr_1[n1];
    printf("Enter the %d elements : ",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr_1[i]);
    }
    printf("Enter the size of the second array= ");
    scanf("%d",&n2);
    int arr_2[n2];
    printf("Enter the %d elements : ",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr_2[i]);
    }
    n=n1+n2;
    int merged_arr[n];
    for(i=0;i<n1;i++)
    {
        merged_arr[i]=arr_1[i];
    }
    for(i=0;i<n2;i++)
    {
        merged_arr[n1+i]=arr_2[i];
    }
    printf("The merged array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",merged_arr[i]);
    }
    printf("\n");
    return 0;
}   