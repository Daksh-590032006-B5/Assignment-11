#include <stdio.h>
extern int global_counter;

int main() 
{
    // Accessing the external global variable
    printf("Initial value of global_counter: %d\n", global_counter);

    // Modifying the external global variable
    global_counter = 100;
    printf("Modified value of global_counter: %d\n", global_counter);

    return 0;
}
