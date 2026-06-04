//WAP to check armstrong number.
#include <stdio.h>
int main()
{
    int n,r,temp,sum=0;
    printf("Enter a 3-digit number= ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("The number %d is an armstrong number.",n);
    }
    else
    {
        printf("The number %d is not an armstrong number.",n);
    }
    return 0;
}