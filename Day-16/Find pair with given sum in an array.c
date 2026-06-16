//WAP to find pair with the given sum in an array.
#include <stdio.h>
int main()
{
    int i,j,n,target_sum,found=0;
    printf("Enter the size of the array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target sum : ");
    scanf("%d",&target_sum);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target_sum)
            {   
                if(found==1)
                {
                    printf(", ");
                }
                else
                {
                    printf("The pair with the desired sum : ");
                    found=1;
                }
                printf("%d and %d", arr[i],arr[j]);    
            }
        }
    }
    if(found==1)
    {
        printf("\n");
    }
    else
    {
        printf("No such pair found.");
    }
    return 0;
}
