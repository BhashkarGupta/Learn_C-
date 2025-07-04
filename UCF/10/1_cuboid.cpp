// Define a class Cuboid with length, breadth and height as instance member
// variables. Define constructors to initialise member variables.

#include<iostream>
using namespace std;

class Cuboid{
    private:
        float lenght, bredth, height;

    public:
        Cuboid(float l, float w, float h){
            lenght = l;
            bredth = w;
            height = h;
        }

        void PrintData(){
            cout << "Length : " << lenght << endl;
            cout << "Width : " << bredth << endl;
            cout << "Height : " << height << endl;
        }
};

int main(){
    Cuboid c1(10, 15, 20);
    c1.PrintData();
    return 0;
}