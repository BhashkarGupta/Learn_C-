// Write a C program to swap values of two int variables.
#include<stdio.h>

int main(){
    int a, b, temp;
    a = 5;
    b= 11;
    printf("a = %d and b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping\n");
    printf("a = %d and b = %d\n", a, b);
    return 0;
}