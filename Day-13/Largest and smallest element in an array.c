//WAP to find the largest and smallest element in an array.
#include <stdio.h>
int main()
{
    int i,size,largest,smallest;
    printf("Enter the size of the array= ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements:\n",size);
    for(i=0;i<size;i++)
    {
       scanf("%d",&arr[i]);
    }
    largest=arr[0];
    smallest=arr[0];
    for(i=1;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("The largest element=%d\n",largest);
    printf("The smallest element=%d\n",smallest);
    return 0;
}