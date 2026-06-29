//WAP to create inventory management system.
#include <stdio.h>
#include <string.h>
#define MAX_ITEMS 50
int i,ids[MAX_ITEMS],quantities[MAX_ITEMS],itemCount=0;;
char names[MAX_ITEMS][30];
float prices[MAX_ITEMS];
int main() 
{
    int choice;
    while(1)
    {
        printf("\n----- SIMPLE INVENTORY -----\n");
        printf("1. Add Item\n");
        printf("2. View All Items\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        if(choice==1) 
        {
            if(itemCount>=MAX_ITEMS) 
            {
                printf("Inventory is full!\n");
                continue;
            }
            printf("Enter Item ID: ");
            scanf("%d",&ids[itemCount]);
            printf("Enter Item Name: ");
            scanf(" %[^\n]",names[itemCount]);
            printf("Enter Quantity: ");
            scanf("%d",&quantities[itemCount]);
            printf("Enter Price: Rs. ");
            scanf("%f",&prices[itemCount]);
            itemCount++;
            printf("Item added successfully!\n");
        } 
        else if(choice==2) 
        {
            if(itemCount==0) 
            {
                printf("Inventory is empty!\n");
                continue;
            }
            printf("\n%-8s %-20s %-8s %-8s\n","ID","Name","Qty","Price(Rs.)");
            printf("----------------------------------------------------------\n");
            for(i=0;i<itemCount;i++) 
            {
                printf("%-8d %-20s %-8d %.2f\n",ids[i],names[i],quantities[i],prices[i]);
            }
        } 
        else if(choice==3) 
        {
            printf("Exiting program.\n");
            break;
        } 
        else 
        {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}