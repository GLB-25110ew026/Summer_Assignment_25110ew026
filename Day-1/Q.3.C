//WAP to find factorial of a number.
#include <stdio.h>
int main()
{
    int n,i;
    unsigned long long fact=1;
    printf("Enter the number = ");
    scanf("%d",&n);
    if(n>0)
    {
        for(i=1;i<=n;++i)
        {
            fact=fact*i;
        }
        printf("Factorial of %d = %llu\n",n,fact);
    }
    else
    {
        printf("Factorial of negative number doesnot exist.");
    }
    return 0;
}