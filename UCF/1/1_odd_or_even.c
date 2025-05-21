// Write a C program to check whether a given number is even or odd.
#include<stdio.h>

int main(){
    printf("Please enter a number : ");
    int userInput;
    scanf("%d", &userInput);
    if (userInput%2 == 0)
    {
        printf("Given number %d is even number\n", userInput);
    }else{
        printf("Given number %d is odd number\n", userInput);
    }
    
    return 0;
}