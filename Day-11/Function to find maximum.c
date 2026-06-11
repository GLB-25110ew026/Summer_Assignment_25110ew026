//WAP to write function to find maximum.
#include <stdio.h>
int max(int a,int b);
int main()
{
    int m,n,result;
    printf("Enter first number= ");
    scanf("%d",&m);
    printf("Enter second number= ");
    scanf("%d",&n);
    result=max(m,n);
    printf("The maximum number between %d and %d is %d.",m,n,result);
    return 0;
}
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}