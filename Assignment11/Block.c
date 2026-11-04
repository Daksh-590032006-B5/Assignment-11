/*Write a C program to demonstrate how a local variable hides a global variable with the same name.*/
#include <stdio.h>
int x = 5;
int main() 
{
    printf("Global x = %d\n", x);
    {
        int x = 10; // local variable
        printf("Local x = %d\n", x);
    }
    printf("Global x = %d\n", x);
    return 0;
}