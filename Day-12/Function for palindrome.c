//WAP to write function for palindrome.
#include <stdio.h>
int palindrome(int a);
int main()
{
    int n;
    printf("Enter the number= ");
    scanf("%d",&n);
    if(palindrome(n))
    {
        printf("%d is a palindrome number.",n);
    }
    else
    {
        printf("%d is not an armstrong number.",n);
    }
    return 0;
}
int palindrome(int a)
{
    int temp=a,r,rev=0;
    while(a>0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    return(temp==rev);
}