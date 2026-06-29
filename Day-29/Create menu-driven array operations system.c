//WAP to create menu-driven array operations system.
#include <stdio.h>
int main() 
{
    int arr[100],size=0,choice,i,element,pos;
    while(1) 
    {
        printf("\n1.Display  2.Insert  3.Delete  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        if(choice==4) 
        {
            printf("Exiting...\n");
            break;
        }
        switch(choice) 
        {
            case 1: 
                if(size==0) 
                {
                    printf("Array is empty!\n");
                } 
                else 
                {
                    printf("Array elements: ");
                    for(i=0;i<size;i++) 
                    {
                        printf("%d ",arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 2:
                if(size>=100) 
                {
                    printf("Array overflow! Cannot insert.\n");
                    break;
                }
                printf("Enter element to insert: ");
                scanf("%d",&element);
                printf("Enter position (0 to %d): ",size);
                scanf("%d",&pos);
                if(pos<0 || pos>size) 
                {
                    printf("Invalid position!\n");
                } 
                else 
                {
                    for(i=size;i>pos;i--) 
                    {
                        arr[i]=arr[i-1];
                    }
                    arr[pos]=element;
                    size++;
                    printf("Element inserted successfully!\n");
                }
                break;
            case 3:
                if(size==0) 
                {
                    printf("Array is already empty!\n");
                } 
                else 
                {
                   printf("Enter position to delete (0 to %d): ",size-1);
                   scanf("%d",&pos);
                   if(pos<0 || pos>=size) 
                   {
                        printf("Invalid position!\n");
                    } 
                    else 
                    { 
                        for(i=pos;i<size-1;i++) 
                        {
                            arr[i]=arr[i+1];
                        }
                        size--; 
                        printf("Element deleted successfully!\n");
                    }
                }
                break;
                default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}