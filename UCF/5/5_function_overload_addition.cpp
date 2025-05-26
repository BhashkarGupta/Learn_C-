// Write functions using function overloading to add two numbers having different data types.
#include<iostream>
using namespace std;

float Add(int num1, float num2){
    return (float)num1 + num2;
}

float Add(float num1, int num2){
    return num1 + (float)num2;
}

int main() {
    int a = 5, b = 3;
    float x = 2.5f, y = 4.8f;

    cout << "Add(5, 4.8) = " << Add(a, y) << endl;
    cout << "Add(2.5, 3) = " << Add(x, b) << endl;

    return 0;
}
