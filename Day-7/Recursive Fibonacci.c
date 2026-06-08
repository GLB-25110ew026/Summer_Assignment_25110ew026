//WAP for Recursive Fibonacci.
#include <stdio.h>
int fibonacci(int n);
int main()
{
    int terms,i;
    printf("Enter the number of terms= ");
    scanf("%d",&terms);
    printf("The fibonacci series: ");
    for(i=0;i<terms;i++)
    {
        printf("%d ",fibonacci(i));
    }
    return 0;
}
int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else    
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }    
}