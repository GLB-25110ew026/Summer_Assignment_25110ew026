//WAP to create salary management system.
#include <stdio.h>
int main() 
{
    int id;
    char name[50];
    float basic,hra,da,tax,net_salary;
    printf("===== Simple Salary Calculator =====\n\n");
    printf("Enter Employee ID: ");
    scanf("%d",&id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]",name); 
    printf("Enter Basic Salary:Rs. ");
    scanf("%f",&basic);
    hra=basic*0.10;  
    da=basic*0.05;  
    tax=basic*0.12;
    net_salary=(basic+hra+da)-tax;
    printf("\n================================\n");
    printf("            PAY SLIP             \n");
    printf("=================================\n");
    printf("ID:          %d\n",id);
    printf("Name:        %s\n",name);
    printf("Basic Pay:   Rs.%.2f\n",basic);
    printf("HRA(+):      Rs.%.2f\n",hra);
    printf("DA(+):       Rs.%.2f\n",da);
    printf("Tax(-):      Rs.%.2f\n",tax);
    printf("---------------------------------\n");
    printf("NET SALARY:  Rs.%.2f\n",net_salary);
    printf("=================================\n");
    return 0;
}