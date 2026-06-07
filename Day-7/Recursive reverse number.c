//WAP for recursive reverse of a number.
#include <stdio.h>
int reverse(int n,int reversed);
int main()
{
    int n,output;
    printf("Enter the number= ");
    scanf("%d",&n);
    output=reverse(n,0);
    printf("The reverse of the number %d is %d.",n,output);
    return 0;
}
int reverse(int n,int reversed)
{
    if(n==0)
    {
        return reversed;
    }
    else
    {
       return reverse(n/10,reversed*10+(n%10));
        
    }
}