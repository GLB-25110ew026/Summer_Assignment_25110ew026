//WAP to find the sum of digits of a number.
#include <stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter a number= ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("The sum of digits of the number is %d.",sum);
    return 0;
}