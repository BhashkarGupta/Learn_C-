// Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// 1. +
// 2. -
// 3. *
// 4. ==
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    Complex() {}
    Complex(int real, int imaginary) : real(real), imaginary(imaginary) {}
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imaginary = imaginary - c.imaginary;
        return temp;
    }
    Complex operator-()
    {
        Complex temp;
        temp.real = -real;
        temp.imaginary = -imaginary;
        return temp;
    }
    Complex operator*(Complex c)
    {
        Complex temp;
        temp.real = (real * c.real) - (imaginary * c.imaginary);
        temp.imaginary = (real * c.imaginary) + (imaginary * c.real);
        return temp;
    }
    bool operator==(Complex c)
    {
        if (real == c.real && imaginary == c.imaginary)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void setData(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void showData()
    {
        if (imaginary > 0)
        {
            cout << real << " + i" << imaginary << endl;
        }
        else if (imaginary < 0)
        {
            cout << real << " - i" << -imaginary << endl;
        }
        else
        {
            cout << real << endl;
        }
    }
};

int main()
{
    Complex c1(2, -3), c2(5, 9), c3, c4, c5(7, 6);
    c1.showData();
    c3 = c1 + c2;
    c3.showData();
    if (c3 == c5)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    if (c3 == c2)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    c4 = c2 - c1;
    c4.showData();
    c4 = -c4;
    c4.showData();
    c3 = c1 * c2;
    c3.showData();
    return 0;
}