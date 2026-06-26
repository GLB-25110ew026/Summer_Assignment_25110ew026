//WAP to create ATM stimulation.
#include <stdio.h>
int main() 
{
    int pin=2468,entered_Pin,choice;
    float balance=5000.00,amount;
    printf("Enter your PIN: ");
    scanf("%d",&entered_Pin);
    if(entered_Pin!=pin) 
    {
        printf("Wrong PIN. Access denied.\n");
        return 0;
    }
    do 
    {
        printf("====== ATM Menu ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice) 
        {
            case 1:
                printf("Current Balance: ₹%.2f\n",balance);
                break;
            case 2:
                printf("Enter the amount to deposit: ₹");
                scanf("%f",&amount);
                if(amount>0) 
                {
                    balance=balance+amount;
                    printf("Deposited ₹%.2f\n",amount);
                } 
                else 
                {
                    printf("Invalid amount.\n");
                }
                break;
            case 3:
                printf("Enter the amount to withdraw: ₹");
                scanf("%f",&amount);
                if(amount>0 && amount<=balance) 
                {
                    balance=balance-amount;
                    printf("Withdrew ₹%.2f\n",amount);
                } 
                else 
                {
                    printf("Invalid or insufficient funds.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } 
    while(choice!=4);
    return 0;
}
