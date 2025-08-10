// Define a class Complex with instance variables a and b to store real and imaginar
// part of a complex number. Provide setData() method with formal arguments with th
// name a and b, to set the values of instance variables. Also define showDatal()
// method to display instance member variable values.
// In question-2, write a non member function in which instantiate Complex class
// dynamically. Initialise instance variables and display their values.

#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void showData()
    {
        if (b < 0)
        {
            cout << a << " - i" << -b << endl;
        }
        else
        {
            cout << a << " + i" << b << endl;
        }
    }
};

void classInitiater(int a, int b)
{
    Complex *p = new Complex;
    p->setData(a, b);
    p->showData();
    delete p;
}

int main()
{
    int a, b;
    cout << "Please enter value for complex number\n";
    cin >> a >> b;
    classInitiater(a, b);
    return 0;
}