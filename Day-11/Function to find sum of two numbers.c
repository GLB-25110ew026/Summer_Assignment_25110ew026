//WAP to write function to find sum of two numbers.
#include <stdio.h>
int sum(int a,int b);
int main()
{
    int m,n,result;
    printf("Enter first number=");
    scanf("%d",&m);
    printf("Enter second number= ");
    scanf("%d",&n);
    result=sum(m,n);
    printf("The summation of the two numbers is %d.",result);
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}