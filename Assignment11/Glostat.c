/*Write a C program to demonstrate that a global variable declared with static can be accessed only within the same source file.*/
#include <stdio.h>

extern int num;

void show()
{
    printf("Value of num = %d\n", num);
}