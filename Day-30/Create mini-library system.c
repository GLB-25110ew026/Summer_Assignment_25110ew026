//WAP to create mini-library system.
#include <stdio.h>
#define MAX_BOOKS 50
struct Book 
{
    int id;
    char title[50];
    int is_issued;
};
int main() 
{
    struct Book library[MAX_BOOKS];
    int book_count=0,choice,search_id,i,found;
    while(1) 
    {
        printf("\n----- MINI LIBRARY -----\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Issue/Return Book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        if(choice==1) 
        {
            if(book_count>=MAX_BOOKS) 
            {
                printf("Library Full!\n");
            } 
            else 
            {
                printf("Enter Book ID: ");
                scanf("%d",&library[book_count].id);
                printf("Enter Title: ");
                scanf(" %[^\n]",library[book_count].title);
                library[book_count].is_issued=0;
                book_count++;
                printf("Book Added!\n");
            }
        } 
        else if(choice==2) 
        {
            if(book_count==0) 
            {
                printf("No books available.\n");
            } 
            else 
            {
                printf("\n%-10s %-25s %-15s\n","ID","Title","Status");
                printf("-----------------------------------------------\n");
                for(i=0;i<book_count;i++) 
                {
                    printf("%-10d %-25s %-15s\n", 
                           library[i].id, 
                           library[i].title, 
                           library[i].is_issued ? "Issued" : "Available");
                }
            }
        } 
        else if(choice==3) 
        {
            printf("Enter Book ID: ");
            scanf("%d",&search_id);
            found=0;
            for(i=0;i<book_count;i++) 
            {
                if(library[i].id==search_id) 
                {
                    found=1;
                    if(library[i].is_issued==0) 
                    {
                        library[i].is_issued=1;
                        printf("Book Issued!\n");
                    } 
                    else 
                    {
                        library[i].is_issued=0;
                        printf("Book Returned!\n");
                    }
                    break;
                }
            }
            if(found==0) 
            {
                printf("Book ID not found.\n");
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