//WAP to create marksheet generation system.
#include <stdio.h>
int main() 
{
    char name[50];
    int roll;
    float maths,science,english,total,percent;
    printf("Enter Student Name: ");
    scanf("%[^\n]",name);
    printf("Enter Roll Number: ");
    scanf("%d",&roll);
    printf("Enter Marks for Maths, Science, English: ");
    scanf("%f %f %f",&maths,&science,&english);
    total=maths+science+english;
    percent=total/3;
    printf("\n----- MARKSHEET -----\n");
    printf("Name: %s\n",name);
    printf("Roll: %d\n",roll);
    printf("Math: %.2f\n",maths);
    printf("Science: %.2f\n",science);
    printf("English: %.2f\n",english);
    printf("-----------------------\n");
    printf("Total: %.2f/300\n",total);
    printf("Percentage: %.2f%%\n",percent);
    return 0;
}