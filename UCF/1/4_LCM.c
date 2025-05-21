// Write a C function to calculate LCM of two numbers (TSRS)
#include<stdio.h>

int LCM(int a, int b){
    int counter = 2, LCM = 1;
    while (counter<=a && counter <=b)
    {
        if (a%counter == 0 && b%counter == 0){
            a /= counter;
            b /= counter;
            LCM *= counter;
            counter = 2;
        }else{
            counter++;
        }
    }
    LCM = LCM * a * b;
    return LCM;
}

int main(){
    int a, b;
    a = 12345;
    b = 54321;
    printf("The LCM of %d and %d is %d\n", a, b, LCM(a, b));
    return 0;
}

