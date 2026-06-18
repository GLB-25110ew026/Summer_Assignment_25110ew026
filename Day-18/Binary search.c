//WAP for binary search.
#include <stdio.h>
int first_occurrence(int arr[],int size,int target);
int main()
{
    int i,n,desired,first_index;
    printf("Enter the size of the array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched= ");
    scanf("%d",&desired);
    first_index=first_occurrence(arr,n,desired);
    if(first_index!=-1)
    {
        printf("Element %d is found at index = ",desired);
        for(i=first_index;i<n && arr[i]==desired;i++)
        {
            printf("%d ",i);
        }
    }
    else
    {
        printf("Element %d is not found in the array.",desired);
    }
    printf("\n");
    return 0;
}
int first_occurrence(int arr[],int size,int target)
{
    int mid,low=0,high=size-1,result=-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]==target)
        {
            result=mid;
            high=mid-1;
        }
        else if(arr[mid]>target)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return result;
}    