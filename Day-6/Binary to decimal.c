//WAP to convert binary to decimal.
#include <stdio.h>
int main()
{
    long long binary,temp,decimal=0,power=1;
    int r;
    printf("Enter the binary number= ");
    scanf("%lld",&binary);
    temp=binary;
    while(temp>0)
    {
        r=temp%10;
        decimal=decimal+r*power;
        power=power*2;
        temp=temp/10;
    }
    printf("The binary number %lld = The decimal number %ld",binary,decimal);
    return 0;
}