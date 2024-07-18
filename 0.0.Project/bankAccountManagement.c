/*Bank Account Management

Bank Account Management: Develop a program that simulates a simple bank account system. Users can create accounts, deposit money, withdraw money, and check their balances. Implement separate functions for these operations. Take the initial balance as Rs.2000.

Condition :

For deposit :

* If the user want to deposit 0 or negetive amount then print "Invalid amount to deposit"


For withdraw :

* If the user want to withdraw 0 or negetive amount then print "Invalid amount to withdrawal"

* If the user given amount is greater than the balance then print "Insufficient Funds"
*/
#include <stdio.h>
#include <stdlib.h>

// for print line
void linePrint()
{
    puts("--------------------------------------------------------------------------------------");
}

// for Create Account
int createAccount()
{
    int amount = 0;
    linePrint();
    puts("Congratulation Your Account Created..!");
start:
    puts("Please Enter the Amount minimum 2000 or more");
    scanf("%d", &amount);

    if (amount < 2000)
    {
        goto start;
    }
    else
    {
        puts("Money Deposit Successfully..!");
    }
    return amount;
}

// for deposit Amount
int deposit()
{
    int amount = 0;
    linePrint();
start:
    puts("Please Enter the Amount for Deposit ");
    scanf("%d", &amount);
    if (amount <= 0)
    {
        puts("Invalid amount\n");
        goto start;
    }
    return amount;
}

// for Withdraw amount
int withdraw(int am)
{
    int w = 0;
    linePrint();
start:
    puts("Please Enter the Withdraw Amount\n");
    scanf("%d", &w);

    if (w <= 0)
    {
        puts("Invalid amount");
        goto start;
    }
    else if (w > am)
    {
        puts("Insufficient Funds");
        goto start;
    }
    puts("Amount withdraw Successfully..!");
    return w;
}

// for Check Balance
void checkBalance(int am)
{
    linePrint();
    printf("The amount Present in your Account is : %d \n", am);
}
int main()
{
    // Variable declaration
    int op, am = 0;

    // For repetition
    while (1)
    {
        linePrint();
        printf(" Enter 1 for Create A Account \n Enter 2 For Deposit money. \n Enter 3 for Withdraw Money. \n Enter 4 For Check Balance.\n Enter 5 for Exit Application.");
        scanf("%d", &op);
        linePrint();

        switch (op)
        {
        case 1:
        {
            am = createAccount();
            break;
        }
        case 2:
        {
            int d = deposit();
            am += d;
            break;
        }
        case 3:
        {
            int w = withdraw(am);
            am -= w;
            break;
        }
        case 4:
        {
            checkBalance(am);
            break;
        }
        case 5:
        {
            return 0;
        }
        default:
            printf("Please Enter the Number Between 1 to 5\n");
        }
    }
}