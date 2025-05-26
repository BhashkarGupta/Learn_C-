// Define a C++ function to print Pascal Triangle up to N lines.
#include <iostream>
using namespace std;

int Factorial(int number){
    int factorialResult = 1;
    while (number >= 2)
    {
        factorialResult *= number;
        number--;
    }
    return factorialResult;
}

int PascalTerm(int term, int height){
    int result = Factorial(height-1)/(Factorial(term-1)*Factorial(height-term));
    return result;
}

void PrintPascalTriangle(int height){
    for (int i = 1; i <= height; i++)
    {
        // cursor position
        for (int j = 1; j <= height - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << PascalTerm(j, i) << "   ";
        }
        cout << endl;
    }
    
}

int main(){
    int height;
    cout << "Please enter the height for Pascal triangle: ";
    cin >> height;
    PrintPascalTriangle(height);
}