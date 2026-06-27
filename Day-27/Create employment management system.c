//WAP to create employment management system.
#include <stdio.h>
struct Employee 
{
    int id;
    char name[30];
    float salary;
};
int main() 
{
    struct Employee emp[30]; 
    int i,count=0,choice;
    printf("\n================== EMPLOYMENT MANAGEMENT SYSTEM ==================\n");
    while(1) 
    {
        printf("\n1. Add Employee\n2. View All\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        if(choice==1) 
        {
            if(count<30) 
            {
                printf("Enter ID: ");
                scanf("%d",&emp[count].id);
                printf("Enter Name: ");
                scanf(" %[^\n]",emp[count].name);
                printf("Enter Salary: ");
                scanf("%f",&emp[count].salary);
                count++;
            } 
            else 
            {
                printf("Database full!\n");
            }
        } 
        else if(choice==2) 
        {
            if(count==0) 
            {
                printf("No records found!\n");
            } 
            else 
            {
                printf("\n%-10s %-20s %-15s\n","ID","Name","Salary");
                printf("---------------------------------------------\n");
                for(i=0;i<count;i++) 
                {
                    printf("%-10d %-20s %-15.2f\n",emp[i].id,emp[i].name,emp[i].salary);
                }
            }
        } 
        else if(choice==3) 
        {
            printf("Exiting system. Goodbye!\n");
            break;
        } 
        else 
        {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}