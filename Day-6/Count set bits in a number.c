//WAP to count set bits in a number.
#include <stdio.h>
int main()
{
    int n,temp,count=0;
    printf("Enter the positive number= ");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        temp=temp & (temp-1);
        count++;
    }
    printf("The number of set bits in %d = %d",n,count);
    return 0;
}