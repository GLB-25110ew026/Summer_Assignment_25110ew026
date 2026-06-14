//WAP to find duplicates in an array.
#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the size of the array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The duplicates are = ");
    for(i=0;i<n;i++)
     {
        int already_mentioned=0;
        for(k=0;k<i;k++)
        {
            if(arr[i]==arr[k])
            {
                already_mentioned=1;
                break;
            }
        }
        if(already_mentioned==1)
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d ",arr[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}