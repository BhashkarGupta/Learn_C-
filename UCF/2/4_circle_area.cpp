// Write a C++ program to calculate the area of a circle
#include <iostream>
using namespace std;

const float pi = 3.14;

int main(){
    float radius;
    cout << "Please enter the radius of a circle\n";
    cin >> radius;
    cout << "Area of circle is " << pi * radius * radius << endl;
    return 0;
}