/*Write a C program using a static variable to generate a unique identification number every time a function is called.*/
#include <stdio.h>
int generate_id() 
{
    static int id = 1000;
    id++;
    return id;
}
int main() 
{
    printf("Generated ID: %d\n", generate_id());
    printf("Generated ID: %d\n", generate_id());
    printf("Generated ID: %d\n", generate_id());
    return 0;
}