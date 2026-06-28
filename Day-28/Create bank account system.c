//WAP to create bank account system.
#include <stdio.h>
int main() 
{
    int choice;
    float balance=0.0,amount;
    while(1) 
    {
        printf("\n----- Bank Account System -----\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        if(scanf("%d",&choice)!=1) 
        {
            printf("Invalid input! Please enter a number.\n");
            while(getchar()!='\n'); 
            continue;
        }
        switch(choice) 
        {
            case 1:
                printf("Enter deposit amount: ");
                scanf("%f",&amount);
                balance=balance+amount;
                printf("Deposited successfully!\n");
                break;
            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f",&amount);
                if(amount<=balance) 
                {
                    balance=balance-amount;
                    printf("Withdrawn successfully!\n");
                } 
                else 
                {
                    printf("Insufficient balance!\n");
                }
                break;
            case 3:
                printf("Current Balance: ₹%.2f\n",balance); 
                break;
            case 4:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}