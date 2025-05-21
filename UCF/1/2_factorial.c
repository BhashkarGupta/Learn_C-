// Write a C program to calculate factorial of a number.

#include<stdio.h>

int main(){
    printf("Please enter a number to calculate it's factorial : ");
    int userInput, factorial = 1;
    scanf("%d", &userInput);
    for (int i = 1; i <= userInput; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d is %d\n", userInput, factorial);
    return 0;
}