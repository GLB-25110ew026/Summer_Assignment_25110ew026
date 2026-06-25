//WAP to merge two sorted arrays.
#include <stdio.h>
int main() 
{
    int i,j,k,m,n1,n2;
    printf("Enter the number of elements in the first sorted array: ");
    scanf("%d",&n1);
    int arr_1[n1];
    printf("Enter the %d elements for the first sorted array:\n",n1);
    for(i=0;i<n1;i++) 
    {
        scanf("%d",&arr_1[i]);
    }
    printf("Enter the number of elements in the second sorted array: ");
    scanf("%d",&n2);
    int arr_2[n2];
    printf("Enter the %d elements for the second sorted array:\n", n2);
    for(i=0;i<n2;i++) 
    {
        scanf("%d",&arr_2[i]);
    }
    int merged[n1+n2]; 
    i=0;
    j=0; 
    k=0;
    while(i<n1 && j<n2) 
    {
        if(arr_1[i]<=arr_2[j]) 
        {
            merged[k]=arr_1[i];
            i++;
        } 
        else 
        {
            merged[k]=arr_2[j];
            j++;
        }
        k++;
    }
    while(i<n1) 
    {
        merged[k]=arr_1[i];
        i++;
        k++;
    }
    while(j<n2) 
    {
        merged[k]=arr_2[j];
        j++;
        k++;
    }
    printf("The merged sorted array:\n");
    for(m=0;m<n1+n2;m++) 
    {
        printf("%d ",merged[m]);
    }
    return 0;
}