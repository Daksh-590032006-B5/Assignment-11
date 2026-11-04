/*Write a C program using the register storage class to calculate the sum of the elements of an array*/
#include <stdio.h>
int main() 
{
    int n, i;
    register int sum = 0; // Using register storage class for sum
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    printf("The sum of the array elements is: %d\n", sum); // Output the sum
    return 0;
}