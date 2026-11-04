/*Write a C program to demonstrate that an automatic variable is created when a block is entered and destroyed when the block is exited.*/
#include <stdio.h>

int main() 
{
    printf("Entering main block\n");
    {
        auto int x = 10;
        printf("x = %d\n", x);
    }
    printf("Exiting main block\n");
    printf("Trying to access x outside the block will result in an error.\n");
    return 0;
}
