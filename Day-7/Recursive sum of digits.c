//WAP for Recursive Sum of digits.
#include <stdio.h>
int Sumofdigits(int n);
int main()
{
    int n,output;
    printf("Enter the number= ");
    scanf("%d",&n);
    output=Sumofdigits(n);
    printf("The sum of digits of the number %d is %d.",n,output);
    return 0;
}
int Sumofdigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        int r=n%10;
        return(r)+Sumofdigits(n/10);
    }
}