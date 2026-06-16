//WAP to find the maximum frequency element in an array.
#include <stdio.h>
int main()
{
    int i,j,n,count,max_element,max_count=0;
    printf("Enter the size of the array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        if(count>max_count)
        {
            max_count=count;
            max_element=arr[i];
        }
    }
    printf("The element with the maximum frequency is : %d",max_element);
    return 0;
}