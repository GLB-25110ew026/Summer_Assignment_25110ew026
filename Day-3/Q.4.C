//WAP to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    int a,b,greatest;
    printf("Enter the first number= ");
    scanf("%d",&a);
    printf("Enter the second number= ");
    scanf("%d",&b);
    greatest=(a>b)?a:b;
    while(1)
    {
        if(greatest%a==0 && greatest%b==0)
        {
            printf("The LCM of the numbers %d and %d is %d",a,b,greatest);
            break;
        }
        greatest++;
    }
    return 0; 
}