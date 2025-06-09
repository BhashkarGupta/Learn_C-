// Define a class Complex to represent a complex number with instance variables a
// and b to store real and imaginary parts. Also define following member functions
// 1. void setData(int,int)
// 2. void showData()
// 3. Complex add(Complex)
// 4. Complex subtract(Complex)
// 5. Complex multiply(Complex)

#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imaginary;

    public:
    void setData(int r, int i){
        real = r;
        imaginary =i;
    }

    void showData(){
        if (imaginary>=0)
        {
            cout << real << " + i" << imaginary << endl;
        }else{
            cout << real << " - i" << (-1) * imaginary << endl;
        }
    }

    int readReal(){
        return real;
    }

    int readImaginary(){
        return imaginary;
    }

    Complex add(Complex c1){
        Complex result;
        result.setData(real + c1.readReal(), imaginary + c1.readImaginary());
        return result;
    }

    Complex substract(Complex c1){
        Complex result;
        result.setData(real - c1.readReal(), imaginary - c1.readImaginary());
        return result;
    }

    Complex multiply(Complex c1){
        Complex result;
        int r = real*c1.readReal() - imaginary*c1.readImaginary();
        int i = imaginary*c1.readReal() + real*c1.readImaginary();
        result.setData(r, i);
        return result;
    }
};


int main(){
    Complex comNum;
    comNum.setData(5, 6);
    comNum.showData();

    Complex comNum1;
    comNum1.setData(2, -3);
    comNum1.showData();

    cout << "Adding both numbers" << endl;
    Complex resultAdd = comNum.add(comNum1);
    resultAdd.showData(); 

    cout  << "Subtracting both numbers" << endl;
    Complex resultSub = comNum.substract(comNum1);
    resultSub.showData();

    cout << "Multiplying both numbers" << endl;
    Complex resultMul = comNum.multiply(comNum1);
    resultMul.showData();
    return 0;
}
