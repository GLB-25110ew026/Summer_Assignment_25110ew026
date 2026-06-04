//WAP to find nth Fibonacci term.
#include <stdio.h>
int main()
{
    int n,i;
    unsigned long long a=0,b=1,c;
    printf("Enter n= ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("The %dst term is 0",n);
    }
    else if (n==2)
    {
        printf("The %dnd term is 1",n);
    }
    else
    {
      for (i=3;i<=n;++i)
        {
            c=a+b;
            a=b;
            b=c;
        }
        if(n==3)
        {
            printf("The %drd term is %llu",n,c);
        }
        else
        {
            printf("The %dth term is %llu",n,c);
        }
    }
    return 0;  
}