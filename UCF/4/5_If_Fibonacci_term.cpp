// Define a C++ function to check whether a given number is a term in a Fibonacci series or not.
#include <iostream>
using namespace std;

bool IfFibonacciTerm(int num){
    int termN = 0, termN1 = 1;
    while (num>=termN)
    {
        if (num == termN)
        {
            return true;
        }
        int temp = termN1;
        termN1 += termN1;
        termN = temp;
    }
    return false;
}

int main(){
    int userInput;
    cout << "Please enter a number: ";
    cin >> userInput;
    if (IfFibonacciTerm(userInput))
    {
        cout << "The given number is a Fibonacci series term\n";
    }else{
        cout << "The given number is not a Fibonacci series term\n";
    }
    return 0;
}