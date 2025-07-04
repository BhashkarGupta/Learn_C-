// Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex number

#include<iostream>
using namespace std;

class Complex{
    private:
    int a, b;

    public:
    void setValue(int real, int imaginary){
        a = real;
        b = imaginary;
    }
    void printValue(){
        cout << a << " + i" << b << endl;
    }
};

int main(){
    Complex c1;
    c1.setValue(2,1);
    c1.printValue();
    return 0;
}