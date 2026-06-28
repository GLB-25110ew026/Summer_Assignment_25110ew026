//WAP to create ticket booking system.
#include <stdio.h>
#define TOTAL_SEATS 5
int main() 
{
    int i,seats[TOTAL_SEATS]={0};
    int choice,seatNum;
    while(1) 
    {
        printf("\n1. View Seats\n2. Book Seat\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        if(choice==1) 
        {
            printf("\n----- Seating Status -----\n");
            for(i=0;i<TOTAL_SEATS;i++) 
            {
                if(seats[i]==0) 
                {
                    printf("Seat %d: Available\n",i+1);
                } 
                else 
                {
                    printf("Seat %d: BOOKED\n",i+1);
                }
            }
        } 
        else if(choice==2) 
        {
            printf("Enter seat number (1-%d): ",TOTAL_SEATS);
            scanf("%d",&seatNum);
            if(seatNum<1||seatNum>TOTAL_SEATS) 
            {
                printf("Invalid seat number!\n");
            } 
            else if(seats[seatNum-1]==1) 
            {
                printf("Seat already taken!\n");
            } 
            else 
            {
                seats[seatNum-1]=1;
                printf("Seat %d booked successfully!\n",seatNum);
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