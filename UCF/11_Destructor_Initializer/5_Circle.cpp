// Define Circle class with radius as instance variable. Define two constructors in the
// class -non parameterised and parameterised.
#include<iostream>
using namespace std;

class Circle{
    private:
        float radius;

    public:
        Circle(){};
        Circle(float radius):radius(radius){}
        void setRadius(float radius){
            this->radius = radius;
        }
        float area(){
            return 3.14f * radius * radius;
        }
        float circumference(){
            return 2 * 3.14f * radius;
        }
};

int main() {
    Circle c1;
    cout << "Testing Circle c1 (default constructor):" << endl;
    c1.setRadius(5.0f);
    cout << "Radius: " << 5.0f << endl;
    cout << "Area: " << c1.area() << endl;
    cout << "Circumference: " << c1.circumference() << endl;

    cout << "\nTesting Circle c2 (parameterized constructor):" << endl;
    Circle c2(10.0f);
    cout << "Radius: " << 10.0f << endl;
    cout << "Area: " << c2.area() << endl;
    cout << "Circumference: " << c2.circumference() << endl;

    cout << "\nTesting c1 with new radius via setRadius:" << endl;
    c1.setRadius(7.5f);
    cout << "Radius: " << 7.5f << endl;
    cout << "Area: " << c1.area() << endl;
    cout << "Circumference: " << c1.circumference() << endl;

    return 0;
}