//WAP to rotate an array right.
#include <stdio.h>
int main()
{
    int i,j,n,temp,rotate_right;
    printf("Enter the size of the array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of times to rotate right: ");
    scanf("%d",&rotate_right);
    for(j=0;j<rotate_right;j++)
    {
        temp=arr[n-1];
        for(i=n-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
    printf("The array after rotating right:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",&arr[i]);
    }
    printf("\n");
    return 0;
}    