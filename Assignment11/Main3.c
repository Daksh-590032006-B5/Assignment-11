#include <stdio.h>

// Declare external functions implemented in bank.c
extern double get_balance(void);
extern void deposit(double amount);
extern int withdraw(double amount);

int main()
{
    printf("--- Welcome to the Secure Bank System ---\n");
    printf("Initial Balance: $%.2f\n\n", get_balance());

    // 1. Make a deposit
    deposit(500.50);
    printf("Current Balance: $%.2f\n\n", get_balance());

    // 2. Try an invalid withdrawal
    withdraw(600.00); 
    printf("Current Balance: $%.2f\n\n", get_balance());

    // 3. Make a valid withdrawal
    withdraw(150.25);
    printf("Final Balance: $%.2f\n", get_balance());

    // Note: Attempting to access 'account_balance' here directly 
    // (e.g., account_balance = 1000000;) will cause a compilation error.

    return 0;
}
