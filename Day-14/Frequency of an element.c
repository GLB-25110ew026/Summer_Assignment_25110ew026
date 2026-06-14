//WAP to find frequency of an element in an array.
#include <stdio.h>
int main()
{
    int i,j,n,count=0,desired;
    printf("Enetr the size of the array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element whose frequency is to be found= ",desired);
    scanf("%d",&desired);
    for(i=0;i<n;i++)
    {
        if(arr[i]==desired)
        {
            count++;
        }
    }
    printf("The frequency of %d in the array is = %d",desired,count);
    return 0;
}