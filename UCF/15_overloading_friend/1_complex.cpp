// Define a class Complex and provide a unary friend operator - to negate the real and
// imaginary part of a complex number.

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    Complex(int real = 0, int imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    Complex(const Complex &temp)
    {
        real = temp.real;
        imaginary = temp.imaginary;
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

    friend Complex operator+(Complex temp1, Complex temp2);
    friend Complex operator-(Complex temp1, Complex temp2);
    friend Complex operator*(Complex temp1, Complex temp2);
    friend void operator-(Complex &temp);
};

void operator-(Complex &temp)
{
    temp.real *= -1;
    temp.imaginary *= -1;
}

Complex operator+(Complex temp1, Complex temp2)
{
    Complex temp;
    temp.real = temp1.real + temp2.real;
    temp.imaginary = temp1.imaginary + temp2.imaginary;
    return temp;
}

Complex operator-(Complex temp1, Complex temp2)
{
    Complex temp;
    temp.real = temp1.real - temp2.real;
    temp.imaginary = temp1.imaginary - temp2.imaginary;
    return temp;
}

Complex operator*(Complex temp1, Complex temp2)
{
    Complex temp;
    temp.real = (temp1.real * temp2.real) - (temp1.imaginary * temp2.imaginary);
    temp.imaginary = (temp1.real * temp2.imaginary) + (temp2.real * temp1.imaginary);
    return temp;
}

int main()
{
    Complex c1(1, 2), c2(3, 5);
    c1.showData();
    c2.showData();
    Complex c3 = c1 + c2;
    c3.showData();
    Complex c4 = c2 - c1;
    c4.showData();
    Complex c5 = c1 * c2;
    c5.showData();
    -c5;
    c5.showData();
    return 0;
}