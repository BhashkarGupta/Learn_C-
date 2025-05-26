// Define a C++ function to find the highest value digit in a given number.
#include <iostream>
using namespace std;

int HighestDigit(int num){
    int highestDigit = 0;
    while (num/10 > 0 )
    {
        if (num%10 > highestDigit)
        {
            highestDigit = num%10;
        }
        num /= 10;
    }
    if (num > highestDigit)
    {
        return num;
    }else{
        return highestDigit;
    }
    
}

int main(){
    cout << "Please enter a number: ";
    int userInput;
    cin >> userInput;
    cout << "The highest digit in the given number " << userInput << " is " << HighestDigit(userInput) << endl;
}