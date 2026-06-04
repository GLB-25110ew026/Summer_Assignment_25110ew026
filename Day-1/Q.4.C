//WAP to count digits in a number.
#include <stdio.h>
int main()
{
    unsigned long long n;
    int digits=0;
    printf("Enter the number = ");
    scanf("%llu",&n);
    unsigned long long originalnumber=n;
    if(n==0)
    {
        digits=1;
    }
    else{
        while(n!=0)
        {
        n=n/10;
        digits++;
        }
    }
    printf("The number of digits in %llu is %d.",originalnumber,digits);
    return 0;
}