//WAP to check whether a number is palindrome or not.
#include <stdio.h>
int main()
{
    int n,temp,r,rev=0;
    printf("Enter a number= ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    if(n==rev)
    {
        printf("The number %d is palindrome.",n);
    }
    else
    {
        printf("The number %d is not palindrome.",n);
    }
    return 0;
}