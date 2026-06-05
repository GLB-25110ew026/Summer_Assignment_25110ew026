//WAP to print factors of a number.
#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the number= ");
    scanf("%d",&n);
    printf("Factors of the number are: ");
    for(i=1;i<=n;++i)
    {
       if(n%i==0)
       {
        printf("%d ",i);
       }
    }
    return 0;
}