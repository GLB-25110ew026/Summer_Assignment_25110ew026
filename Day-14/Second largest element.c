//WAP to find the second largest element in an array.
#include <stdio.h>
#include <limits.h>
int main()
{
    int i,j,n,largest,second_largest;
    printf("Enter the size of the array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=INT_MIN;
    second_largest=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(largest<arr[i])
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(second_largest<arr[i] && arr[i]!=largest)
            {
                second_largest=arr[i];
            }
     }
        if(second_largest==INT_MIN)
        {
            printf("No distinct second largest element exists.");
        }
        else
        {
            printf("The second largest element of the array is = %d",second_largest);
        }
        return 0;
}