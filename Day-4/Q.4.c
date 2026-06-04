//WAP to print armstrong numbers in a range.
#include <stdio.h>
int main()
{
    int n,i,l,u,temp,r,sum;
    printf("Enter the lower limit= ");
    scanf("%d",&l);
    printf("Enter the upper limit= ");
    scanf("%d",&u);
    printf("Armstrong numbers in the given range are= ");
    for(i=l;i<=u;i++)
    {
        sum=0;
        temp=i;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(sum==i)
    {
        printf("%d ",i);
    }
    }
    printf("\n");
    return 0;
}