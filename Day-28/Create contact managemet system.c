//WAP to create contact management system.
#include <stdio.h>
#include <string.h>
#define MAX_CONTACTS 50
struct Contact 
{
    char name[30];
    char phone[15];
};
int main() 
{
    struct Contact list[MAX_CONTACTS];
    int i,count=0,choice,found;
    char query[30];
    while(1) 
    {
        printf("\n----- CONTACTS (%d/%d) -----\n",count,MAX_CONTACTS);
        printf("1. Add Contact\n");
        printf("2. View All\n");
        printf("3. Search\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf(" %d",&choice);
        if(choice==1) 
        {
            if(count<MAX_CONTACTS) 
            {
                printf("Enter Name: ");
                scanf(" %[^\n]s",list[count].name);
                printf("Enter Phone: ");
                scanf(" %[^\n]s",list[count].phone);
                count++;
                printf("Saved!\n");
            } 
            else 
            {
                printf("Memory full!\n");
            }
        } 
        else if(choice==2) 
        {
            if(count==0) 
            {
                printf("No contacts yet.\n");
            } 
            else 
            {
                for(i=0;i<count;i++) 
                {
                    printf("%d. %s - %s\n",i+1,list[i].name,list[i].phone);
                }
            }
        } 
        else if(choice==3) 
        {
            printf("Enter Name to search: ");
            scanf(" %[^\n]s",query);
            found=0;
            for(i=0;i<count;i++) 
            {
                if(strcmp(list[i].name,query)==0) 
                {
                    printf("Found! Phone: %s\n",list[i].phone);
                    found=1;
                    break;
                }
            }
            if(found==0) 
            {
                printf("Not found.\n");
            }
        } 
        else if(choice==4) 
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