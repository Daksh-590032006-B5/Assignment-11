/*Write a C program using a static local variable to count how many times a function has been called.*/
#include <stdio.h>

void count_calls() 
{
    static int count = 0;
    count++;
    printf("Function has been called %d times.\n", count);
}
int main() 
{
    count_calls();
    count_calls();
    count_calls();
    return 0;
}