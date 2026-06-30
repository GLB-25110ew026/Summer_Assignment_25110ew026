//WAP to develop complete mini-project using arrays, strings and functions.
#include <stdio.h>
#include <string.h>
#define MAX_MOVIES 15
#define NAME_LEN 30
void addMovie(char list[][NAME_LEN],int *count);
void showList(char list[][NAME_LEN],int count);
int main() 
{
    char watchlist[MAX_MOVIES][NAME_LEN];
    int movieCount=0,choice;
    while(1) 
    {
        printf("\n----- MOVIE WATCHLIST -----\n");
        printf("1. Add Movie\n");
        printf("2. Show All Movies\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            addMovie(watchlist,&movieCount);
        } 
        else if(choice==2) 
        {
            showList(watchlist,movieCount);
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
void addMovie(char list[][NAME_LEN],int *count) 
{
    if(*count>=MAX_MOVIES) 
    {
        printf("List is full!\n");
        return;
    }
    printf("Enter movie name: ");
    scanf(" %[^\n]",list[(*count)]);
    (*count)++; 
    printf("Movie added successfully!\n");
}
void showList(char list[][NAME_LEN],int count) 
{
    int i;
    if(count==0) 
    {
        printf("Your watchlist is empty.\n");
        return;
    }
    printf("\nYour Movies:\n");
    for(i=0;i<count;i++) 
    {
        printf("%d. %s\n",i+1,list[i]);
    }
}