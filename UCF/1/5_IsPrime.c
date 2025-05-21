// Write a C function to check whether a given number is a Prime number or not.(TSRS)
#include<stdio.h>

int IsPrime(int num){
    int counter = 2;
    while (counter < num)
    {
        if (num%counter == 0)
        {
            return 0;
        }
        counter++;
    }
    if (num == counter)
    {
        return 1;
    }else{
        return 0;
    }   
}

int main(){
    printf("Please enter a number: ");
    int userInput;
    scanf("%d", &userInput);
    if (IsPrime(userInput))
    {
        printf("The given number %d is prime\n", userInput);
    }else{
        printf("The give number %d is non-prime number\n", userInput);
    }
    
    return 0;
}