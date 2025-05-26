// Define a C++ function to calculate x raised to the power y.
#include <iostream>
using namespace std;

int CalculatePower(int num, int power){
    int result = 1;
    if (power == 0)
    {
        return result;
    }else{
        while (power>0)
        {
            result *= num;
            power--;
        }
        return result;
    }
}

int main(){
    cout << "Please Enter a number: ";
    int num, power;
    cin >> num;
    cout << "Please enter power of the number: ";
    cin >> power;
    cout << num << " to the power of " << power << " is " << CalculatePower(num, power) << endl; 
}