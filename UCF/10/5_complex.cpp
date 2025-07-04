// Define a class Complex with instance variables for real and imaginary part of a
// complex number. Define only one parameterised constructor in the class to initialise
// complex object. Also define showData method in the class to display object data.
// Now create an array of Complex class with size 5 and display values of each
// object.

#include<iostream>
using namespace std;

class Complex{
    private:
        int real, imaginary;
    
    public:
        Complex(int realPart, int imaginaryPart){
            real = realPart;
            imaginary = imaginaryPart;
        }

        void Showdata(){
            cout << real << " + i" << imaginary << endl;
        }
};

int main(){
    Complex arr[5] = {
        Complex(1.0, 2.0),
        Complex(2.0, 3.0),
        Complex(3.0, 4.0),
        Complex(4.0, 5.0),
        Complex(5.0, 6.0)
    };

    for (int i = 0; i < 5; i++)
    {
        arr[i].Showdata();
    }
    

    return 0;
}