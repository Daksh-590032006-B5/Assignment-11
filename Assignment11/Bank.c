#include <stdio.h>
static double account_balance = 0.0;
extern double get_balance(void) 
{
    return account_balance;
}
extern void deposit(double amount) 
{
    if (amount > 0) {
        account_balance += amount;
        printf("Successfully deposited: $%.2f\n", amount);
    } else {
        printf("Error: Deposit amount must be positive.\n");
    }
}
extern int withdraw(double amount)
{
    if (amount <= 0)
    {
        printf("Error: Withdrawal amount must be positive.\n");
        return 1; // Failure
    }
    
    if (amount > account_balance) 
    {
        printf("Error: Insufficient funds for withdrawal of $%.2f\n", amount);
        return 1; // Failure
    }
    
    account_balance -= amount;
    printf("Successfully withdrew: $%.2f\n", amount);
    return 0; // Success
}