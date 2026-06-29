//WAP to create library management system.
#include <stdio.h>
#include <stdlib.h>
struct Book 
{
    int id;
    int is_issued;
};
struct Book library[100];
int book_count=0;
int main() 
{
    int i,choice,search_id;
    while(1) 
    {
        printf("\n1. Add Book | 2. List Books | 3. Issue Book | 4. Return Book | 5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        if(choice==1) 
        {
            if(book_count<100) 
            {
                library[book_count].id=book_count+1;
                library[book_count].is_issued=0;
                printf("Added Book with ID: %d\n",library[book_count].id);
                book_count++;
            } 
            else 
            {
                printf("Library storage full! Cannot add more books.\n");
            }
        }
        else if(choice==2) 
        {
            if(book_count==0) 
            {
                printf("Library is empty.\n");
            } 
            else 
            {
                for(i=0;i<book_count;i++) 
                {
                    printf("Book ID: %d | Status: %s\n", 
                        library[i].id, 
                        library[i].is_issued ? "Issued" : "Available");
                }
            }
        }
        else if(choice==3) 
        {
            printf("Enter Book ID to issue: ");
            scanf("%d",&search_id);
            if(search_id>0 && search_id<=book_count) 
            {
                if(library[search_id-1].is_issued==1) 
                {
                    printf("Book %d is already issued!\n",search_id);
                } 
                else 
                {
                    library[search_id-1].is_issued=1;
                    printf("Book %d Issued.\n",search_id);
                }
            } 
            else 
            {
                printf("Book not found.\n");
            }
        }
        else if(choice==4) 
        {
            printf("Enter Book ID to return: ");
            scanf("%d",&search_id);
            if(search_id>0 && search_id<=book_count) 
            {
                if(library[search_id-1].is_issued==0) 
                {
                    printf("Book %d was not issued!\n",search_id);
                } 
                else 
                {
                    library[search_id-1].is_issued=0;
                    printf("Book %d Returned.\n",search_id);
                }
            } 
            else 
            {
                printf("Book not found.\n");
            }
        }
        else if(choice==5) 
        {
            printf("Goodbye!\n");
            exit(0);
        }
        else 
        {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}