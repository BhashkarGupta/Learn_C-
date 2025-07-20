// 1. Define a C++ class fraction
// class fraction
// {
// long numerator;
// long denominator;
// public:
// fraction (long n=0, long d=0);
// }
// Define an operator + to add two fraction object.
// 2. In Question-1, define an operator < to compare two fraction objects.
#include<iostream>
using namespace std;

class fraction{
    private:
        long numerator, denominator;

    public:
        fraction(long n=0, long d=1){
            numerator = n;
            denominator = d;
        }

        bool operator<(fraction f){
            if (denominator == f.denominator)
            {
                if (numerator < f.numerator)
                {
                    return true;
                }else{
                    return false;
                }
            }else{
                fraction temp(numerator, denominator);
                temp.numerator *= f.denominator;
                f.numerator *= temp.denominator;
                if (temp.numerator<f.numerator)
                {
                    return true;
                }else{
                    return false;
                }
                
            }
        }
};

int main(){
    fraction f1(1,5), f2(3,5), f3(3,20);
    if (f1<f2)
    {
        cout << "f1<f2" << endl;
    }else{
        cout << "f1>f2" << endl;
    }
    if (f1<f3)
    {
        cout << "f1<f3" << endl;
    }else{
        cout << "f1>f3" << endl;
    }
    return 0;
}
