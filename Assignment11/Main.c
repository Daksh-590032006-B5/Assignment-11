/*Write a C program to demonstrate that a global variable declared with static can be accessed only within the same source file.*/
#include <stdio.h>

static int num = 10;  // Global static variable

void display()
{
    printf("Value of num = %d\n", num);
}

int main()
{
    display();
    return 0;
}