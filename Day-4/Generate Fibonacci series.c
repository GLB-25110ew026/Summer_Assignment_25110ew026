//WAP to generate Fibonacci series.
#include <stdio.h>
int main()
{
    int n,i;
    unsigned long long a=0,b=1,c;
    printf("Enter the number of terms in the fibonacci series= ");
    scanf("%d",&n);
    printf("The Fibonacci series is: ");
    for(i=1;i<=n;++i)
    {
        printf("%llu ",a);
        c=a+b;
        a=b;
        b=c;
    }    
    return 0;
}