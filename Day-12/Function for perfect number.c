//WAP to write function for perfect number.
#include <stdio.h>
int perfect(int a);
int main()
{
    int n;
    printf("Enter the positive number= ");
    scanf("%d",&n);
    if(perfect(n))
    {
        printf("%d is a perfect number.",n);
    }
    else
    {
        printf("%d is not a perfect number.",n);
    }
    return 0;
}
int perfect(int a)
{
    int i,sum=0;
    for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
    }
    return(sum==a);
}