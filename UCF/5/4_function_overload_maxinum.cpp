// Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
using namespace std;

int Max(int num1, int num2){
    if (num1>num2)
    {
        return num1;
    }
    return num2;
}
float Max(float num1, float num2){
    if (num1>num2)
    {
        return num1;
    }
    return num2;
}

int main() {
    int a = 10, b = 20;
    float x = 5.5f, y = 3.2f;

    cout << "Max of " << a << " and " << b << " is " << Max(a, b) << endl;
    cout << "Max of " << x << " and " << y << " is " << Max(x, y) << endl;

    return 0;
}