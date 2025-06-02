// Define a class Circle with radius as its property. Provide setRadius and
// getRadius methods. Also define methods to return area and circumference of
// of circle.
#include<iostream>
using namespace std;

class Circle{
    private:
    float radius;

    public:
    void setRadius(float r){
        radius = r;
    }

    float getRadius(){
        return radius;
    }

    float area(){
        return radius * radius * 3.14;
    }

    float circumference(){
        return 2 * 3.14 * radius;
    }
};

int main(){
    Circle c1;
    c1.setRadius(21);
    cout << "Radius of circle: " << c1.getRadius() << endl;
    cout << "Circumference of circle: " << c1.circumference() << endl;
    cout << "Area of circle: " << c1.area() << endl;
    return 0;
}