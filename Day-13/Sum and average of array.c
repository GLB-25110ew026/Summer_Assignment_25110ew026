//WAP to find the sum and average of an array.
#include <stdio.h>
int main()
{
    int i,n,sum=0;
    float average;
    printf("Enter the number of elements in the array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    average=(float)sum/n;
    printf("The sum of the elements in the array=%d\n",sum);
    printf("The average of the elements in the array=%f",average);
    return 0;
}