//WAP to create student record system using arrays and strings.
#include <stdio.h>
#include <string.h>
int main() 
{
    int i,roll_no[50],count=0,choice,search_roll,found;
    char name[50][30];
    float marks[50];
    while(1) 
    {
        printf("\n1. Add Record\n2. Display All\n3. Search\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        if(choice==1) 
        {
            if(count<50)
            {

                printf("Enter Roll No: ");
                scanf("%d",&roll_no[count]);
                printf("Enter Name: ");
                scanf(" %[^\n]",name[count]); 
                printf("Enter Marks: ");
                scanf("%f",&marks[count]);
                count++;
                printf("Added successfully!\n");
            }
            else
            {
                printf("Database full! Cannot add more records.\n");
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
                printf("\n%-10s %-20s %-10s\n","Roll","Name","Marks");
                printf("-------------------------------------\n");
                for(i=0;i<count;i++) 
                {
                    printf("%-10d %-20s %-10.2f\n",roll_no[i],name[i],marks[i]);
                }
            }
        } 
        else if(choice==3) 
        {
            printf("Enter Roll No to search: ");
            scanf("%d",&search_roll);
            found=0;
            for(i=0;i<count;i++) 
            {
                if(roll_no[i]==search_roll) 
                {
                    printf("Found! Name: %s | Marks: %.2f\n",name[i],marks[i]);
                    found=1;
                    break;
                }
            }
            if(found==0) 
            {
                printf("Record not found.\n");
            }
        } 
        else if(choice==4) 
        {
            printf("Exiting...\n");
            break;
        } 
        else 
        {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}