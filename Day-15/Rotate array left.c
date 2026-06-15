//WAP to rotate array left.
#include <stdio.h>
int main()
{
    int i,j,n,temp,rotate_left;
    printf("Enter the size of the array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of times to rotate left: ");
    scanf("%d",&rotate_left);
    for(j=0;j<rotate_left;j++)
    {
        temp=arr[0];
        for(i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
    printf("The array after rotating left %d times:\n",rotate_left);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
