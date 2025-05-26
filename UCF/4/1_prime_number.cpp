// Define a C++ function to print all prime numbers between two given numbers
#include <iostream>

using namespace std;

void printPrime(int num1, int num2){
    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for (int i = num1; i <= num2; i++)
    {
        int counter = 2;
        while (counter < i)
        {
            if (i%counter == 0)
            {
                break;
            }
            counter++;
        }
        if (i==counter)
        {
            cout << i << " ";
        } 
    }
    cout << endl;
}

int main(){
    cout << "Please enter two numbers: \n";
    int num1, num2;
    cin >> num1 >> num2;
    cout << "The prime numbers between " << num1 << " and " << num2 << " are :\n";
    printPrime(num1, num2);
}