//WAP to create mini-employee management system.
#include <stdio.h>
struct Employee 
{
    int id;
    char name[30];
    float salary;
};
int main() 
{
    struct Employee emp[10];
    int i,count=0,choice;
    while(1) 
    {
        printf("\n1. Add Employee\n");
        printf("2. Display All\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        if(choice==1) 
        {
            if(count<10) 
            {
                printf("Enter ID: ");
                scanf("%d",&emp[count].id);
                printf("Enter Name: ");
                scanf(" %[^\n]",emp[count].name);
                printf("Enter Salary:Rs.");
                scanf("%f",&emp[count].salary);
                count++;
                printf("Employee added!\n");
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
                printf("No records found.\n");
            } 
            else 
            {
                printf("\n----- Employee List -----\n");
                for(i=0;i<count;i++) 
                {
                    printf("ID: %d | Name: %s | Salary(Rs.): %.2f\n",emp[i].id,emp[i].name,emp[i].salary);
                }
            }
        } 
        else if(choice==3) 
        {
            printf("Goodbye!\n");
            break;
        } 
        else 
        {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}