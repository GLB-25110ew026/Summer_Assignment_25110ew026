//WAP to write function for armstrong.
#include <stdio.h>
int armstrong(int m);
int main()
{
    int n;
    printf("Enter the 3-digit number= ");
    scanf("%d",&n);
    if(armstrong(n))
    {
        printf("%d is an armstrong number.",n);
    }
    else
    {
        printf("%d is not an armstrong number.",n);
    }
    return 0;
}
int armstrong(int m)
{
    int temp=m,r,sum=0;
    while(temp>0)
    {
        r=temp%10;
        sum=sum=r*r*r;
        temp=temp/10;
    }
    return(sum==m);
}