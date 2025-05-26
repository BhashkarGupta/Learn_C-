// Write a C++ function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>

using namespace std;

int Add(int num1, int num2, int num3 = 0){
    return num1 + num2 + num3;
}

int main(){
    cout << Add(4, 5) << endl;
    cout << Add(5, 6, 10) << endl;
}