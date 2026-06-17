//WAP to find the union of two arrays.
#include <stdio.h>
int duplicate(int arr[],int size,int element);
int main()
{
    int i,n1,n2,k,n=0;
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
    k=n1+n2;
    int union_arr[k];
    for(i=0;i<n1;i++)
    {
        if(duplicate(union_arr,n,arr_1[i])==0)
        {
            union_arr[n]=arr_1[i];
            n++;
        }
    }
    for(i=0;i<n2;i++)
    {
        if(duplicate(union_arr,n,arr_2[i])==0)
        {
            union_arr[n]=arr_2[i];
            n++;
        }
    }
    printf("The union of the array : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",union_arr[i]);
    }
    printf("\n");
    return 0;
}    
int duplicate(int arr[],int size,int element)
{   
    int i;
    for (i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return 1;
        }
    }
    return 0;
}

