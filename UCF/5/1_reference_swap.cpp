// Define a C++ function to swap data of two int variables using call by reference
#include <iostream>
using namespace std;

void SwapValues(int& num1, int&num2){
    int temp = num2;
    num2 = num1;
    num1 = temp;
}

int main(){
    int num1 = 7, num2 = 21;
    SwapValues(num1, num2);
    cout << "num1 = " << num1 << " num2 = " << num2 << endl;
    return 0;
}