//WAP to convert decimal to binary.
#include <stdio.h>
int main()
{
    long long decimal,temp;
    int r;
    long long binary=0,place=1;
    printf("Enetr the decimal number= ");
    scanf("%lld",&decimal);
    temp=decimal;
    while(decimal>0)
    {
        r=decimal%2;
        binary=binary+r*place;
        place=place*10;
        decimal=decimal/2;
    }
    printf("The decimal number %lld = The binary number %lld",temp,binary);
    return 0;
}