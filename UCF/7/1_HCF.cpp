// Define a function to calculate HCF of two numbers.
#include<iostream>
using namespace std;

int HCF(int num1, int num2){
    int counter;
    if (num1<num2)
    {
        counter = num1;
    }else{
        counter = num2;
    }
    
    while (counter != 1)
    {
        if (num1%counter == 0 && num2%counter == 0)
        {
            return counter;
        }
        counter--;
    }
    return counter;
}

int main(){
    cout << "Please enter two numbers: ";
    int num1, num2;
    cin >> num1 >> num2;
    cout << "The HCF of the given numbers is : " << HCF(num1, num2) << endl;
    return 0;
}