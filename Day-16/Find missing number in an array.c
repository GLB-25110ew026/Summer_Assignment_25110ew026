//WAP to find the missing number in an array.
#include <stdio.h>
int MissingNumber(int arr[],int size);
int main()
{
    int i,n,missing_num;
    printf("Enter the size of the array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    missing_num=MissingNumber(arr,n);
    printf("The missing number is : %d ",missing_num);
    return 0;
}    
int MissingNumber(int arr[],int size)
{   
    int i,N=size+1;
    int exp_sum=N*(N+1)/2;
    int actual_sum=0;
    for(i=0;i<size;i++)
    {
        actual_sum=actual_sum+arr[i];
    }
    return exp_sum-actual_sum;
}
