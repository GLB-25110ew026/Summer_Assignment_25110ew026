//WAP to calculate sum of first N natural numbers.
#include <stdio.h>
int main()
{
    int N,i,sum=0;
    printf("Enter the positive number: ");
        scanf("%d",&N);
        for(i=1;i<=N;++i)
        {
            sum=sum+i;
        }
        printf("Sum of first %d natural numbers = %d.\n",N,sum);
        return 0;
}
