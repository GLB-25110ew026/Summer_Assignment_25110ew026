//WAP for linear search.
#include <stdio.h>
int main()
{
    int i,n,desired,found_flag=0;
    printf("Enter the size of the array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements :\n",n);
    for(i=0;i<n;i++)
    {   
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched = ");
    scanf("%d",&desired);
    for(i=0;i<n;i++)
    {
        if(arr[i]==desired)
        {
            found_flag=1;
            printf("The element %d is found at index %d.\n ",desired,i);
        }
    }
    if(found_flag==0)
    {
        printf("The element %d is not found in the array.\n",desired);
    }
    return 0;
}