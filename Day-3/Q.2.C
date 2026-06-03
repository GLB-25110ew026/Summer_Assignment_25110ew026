//WAP to print the prime numbers in a range.
#include <stdio.h>
int main()
{
    int l,u,i,j,prime;
    printf("Enter the lower limit= ");
    scanf("%d",&l);
    printf("Enter the upper limit= ");
    scanf("%d",&u);
    printf("The prime numbers between %d and %d are= ",l,u);
    for(i=l;i<=u;i++)
    {
        if(i<2)
        {
            continue;
        }
        prime=1;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                prime=0;
                break;
            }
        }
        if(prime==1)
        {
          printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}