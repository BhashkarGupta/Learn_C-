// 1. Define a class A with two int type member variables. Define a member function to setData() and showData() 
// to set and display values of member variables. Also define a member function with the name input() to take 
// input from the user. Define a class B with one int type member variable. Override input() function in order 
// to input three values from the user for all three member variables. Also override showData() function to 
// display all three values.

#include<iostream>
using namespace std;

class A{
    private:
    int var1, var2;

    public:
    void setData(int var1, int var2){
        this->var1 = var1;
        this->var2 = var2;
    }

    void showData(){
        cout << "var1: " << var1 << endl;
        cout << "var2: " << var2 << endl;
    }

    void input(){
        cout << "Please enter Number1: ";
        cin >> var1;
        cout << "Please enter Number2: ";
        cin >> var2;
    }
};

class B:public A{
    private:
    int var3;

    public:
    void input(){
        int temp1, temp2;
        cout << "Please enter 3 numbers : ";
        cin >> temp1 >> temp2 >> var3;
        setData(temp1, temp2);
    }

    void showData(){
        A::showData();
        cout << "Var3 : " << var3 << endl;
    }
};

int main(){
    B obj1;
    obj1.input();
    obj1.showData();
    return 0;
}