// Define a function to print all the prime factors of a given number. [ for example num=36, prime factors are 2, 3 ]
#include <iostream>
using namespace std;

void PrintPrimeFactors(int num)
{
    cout << "Prime factors of " << num << " are: " << endl;
    for (int counter = 2; counter <= num; counter++)
    {
        int temp = 2;
        while (temp <= counter)
        {
            if (counter % temp == 0)
            {
                break;
            }
            temp++;
        }
        if (temp == counter)
        {
            if (num % counter == 0)
            {
                cout << counter << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int userInput;
    cout << "Please enter a number: ";
    cin >> userInput;
    PrintPrimeFactors(userInput);
    return 0;
}