//WAP to create voting eligibility system.
#include <stdio.h>
int main() 
{
    int age=0;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18) 
    {
        printf("You are eligible to vote.");
    } 
    else if(age>=0 && age<18) 
    {
        printf("You are not eligible to vote.");
    } 
    else 
    {
        printf("Invalid age entered, please enter a positive number.");
    }
    return 0;
}
