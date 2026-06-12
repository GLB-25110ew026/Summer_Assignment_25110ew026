//WAP to write function for fibonacci.
#include <stdio.h>
int fibonacci(int terms);
int main()
{
    int n,result;
    printf("Enter the number of terms= ");
    scanf("%d",&n);
    printf("The fibonacci series: ",result);
    result=fibonacci(n);
    return 0;
}
int fibonacci(int terms)
{
    int i, a=0,b=1,c;
    for(i=0;i<terms;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
