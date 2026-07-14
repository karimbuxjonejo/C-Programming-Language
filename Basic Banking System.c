#include<stdio.h>
#include <string.h>
int main()
{
    char account[50]="";
    int ask, balance=0, amount=0, accountCreated=0;
    while(1)
    {
        printf("Welcome to Hera Pheri Bank...\n");
        printf("0. Create an Account\n");
        printf("1. Account Details\n");
        printf("2. Deposit Amount\n");
        printf("3. Withdraw Amount\n");
        printf("4. View Balance\n");
        printf("5. Exit Menu\n\n");
        if (scanf("%d", &ask) != 1)
        {
            printf("Invalid input. Please enter a number.\n");

            while (getchar() != '\n');
            continue;
        }
        switch (ask)
        {
        case 0:
            if(accountCreated)
            {
                printf("You already have an account\n");
                break;
            }
            {
                printf("Enter Account Name: ");
                if (scanf("%49s", account) != 1)
                {
                    printf("Invalid account name.\n");
                    while (getchar() != '\n');
                    break;
                }
                accountCreated = 1;
                printf("New Account Created Successfully!\n");
                break;
            }
        case 1:
            if(!accountCreated)
            {
                printf("First create an account to further proceed.");
            }
            else
            {
                printf("Your Account name: %s\n",account);
                printf("Your Current amount is: %d\n",balance);
            }
            break;
        case 2:
            if(!accountCreated)
            {   printf("First create an account to further proceed.");
            }
            else
            {
                printf("Enter Amount to Deposit: ");
                if (scanf("%d", &amount) != 1)
                {
                    printf("Invalid amount.\n");
                    while (getchar() != '\n');
                    break;
                }
                if (amount < 1)
                {
                    printf("Invalid amount! Please enter a positive value.\n");
                }
                else
                {
                    balance += amount;
                    printf("Deposit successful.\nCurrent Balance: %d\n", balance);
                }
            }
            break;
        case 3:
            if(!accountCreated)
            {
                printf("First create an account to further proceed.");
            }
            else
            {
                printf("Enter Amount to Withdraw: ");
                if (scanf("%d", &amount) != 1)
                {
                    printf("Invalid amount.\n");
                    while (getchar() != '\n');
                    break;
                }
                if (amount < 1) {
                    printf("Invalid amount! Please enter a positive value.\n");
                }
                else
                {
                    if (amount <= balance)
                    {
                        balance -= amount;
                        printf("Withdrawal successful.\nCurrent Balance: %d\n", balance);
                    }
                    else
                        printf("Insufficient Balance\n");
                }
            }
            break;
        case 4:
            if(!accountCreated)
            {
                printf("First create an account to further proceed.");
            }
            else
            {
                printf("\nCurrent Balance: %d\n", balance);
            }
            break;
        case 5:
            printf("Thank you for your Valuable Time...\nKeep using our services.");
            return 0;
        default:
            printf("Invalid menu choice. Please select 0-5.\n");
            break;
        }
    }
    return 0;
}