//WAP to move the zeroes to the end of an array.
#include <stdio.h>
int main()
{
    int i,n,count;
    printf("Enter the size of the array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[count]=arr[i];
            count++;
        }
    }
    while(count<n)
    {
        arr[count]=0;
        count++;
    }
    printf("The desired array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}    
    

