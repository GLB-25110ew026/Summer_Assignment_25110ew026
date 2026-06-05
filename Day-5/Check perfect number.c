//WAP to check perfect number.
#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n && n>0)
    {
        printf("The number %d is a perfect number.",n);
    }
    else{
        printf("The number %d is not a perfect number.",n);
    }
    return 0;
}