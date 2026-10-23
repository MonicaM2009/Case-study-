#include <stdio.h>

int main()
{
    float balance, amount;
    int choice;

    printf("Enter current account balance: ");
    scanf("%f", &balance);

    printf("\n--- ATM Menu ---\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nCurrent Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);
            if(amount <= balance)
            {
                balance = balance - amount;
                printf("\nTransaction successful");
                printf("\nRemaining Balance = %.2f", balance);
            }
            else
            {
                printf("\nInsufficient balance");
            }
            break;

        case 3:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("\nDeposit successful");
            printf("\nUpdated Balance = %.2f", balance);
            break;

        default:
            printf("\nInvalid option");
    }

    return 0;
}