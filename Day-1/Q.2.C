//WAP to print multiplication table of a given number.
#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the number = ");
    scanf("%d",&n);
    printf("\nMultiplication Table of %d :\n",n);
    for(i=1;i<=10;++i)
    {
        printf("%d * %d = %d\n",n,i,n * i);
    }
    return 0;
} 