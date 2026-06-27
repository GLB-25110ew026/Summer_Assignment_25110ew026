//WAP to create student record management system.
#include <stdio.h>
struct Student 
{
    int roll;
    char name[30];
    float gpa;
};
int main() 
{
    struct Student s1,s2;
    printf("Enter Details for Student 1:\n");
    printf("Enter Roll: ");
    scanf("%d",&s1.roll);
    printf("Enter Name: ");
    scanf(" %[^\n]",s1.name); 
    printf("Enter GPA: ");
    scanf("%f",&s1.gpa);
    printf("\n");
    printf("Enter Details for Student 2:\n");
    printf("Enter Roll: ");
    scanf("%d",&s2.roll);
    printf("Enter Name: ");
    scanf(" %[^\n]",s2.name);
    printf("Enter GPA: ");
    scanf("%f",&s2.gpa);
    printf("\n----------------- Student Records -----------------\n");
    printf("Roll : %-5d Name: %-20s GPA: %.2f\n",s1.roll,s1.name,s1.gpa);
    printf("Roll : %-5d Name: %-20s GPA: %.2f\n",s2.roll,s2.name,s2.gpa);
    return 0;
}