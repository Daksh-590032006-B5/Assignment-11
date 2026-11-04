/*Write a C program that calls the same function several times and compares the behaviour of an automatic variable with a static variable*/
#include <stdio.h>
void func() 
{
    auto int x = 0;
    static int y = 0;
    x++;
    y++;
    printf("Automatic x = %d, Static y = %d\n", x, y);
}
int main() 
{
    printf("First call:\n");
    func();
    printf("Second call:\n");
    func();
    printf("Third call:\n");
    func();
    return 0;
}