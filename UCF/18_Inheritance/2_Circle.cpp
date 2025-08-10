// Define a class Circle with radius as private instance variable and setRadius).
// getRadius), getArea as public instance methods. Define a class ThickCircle as a
// subclass of Circle with thickness as private instance variable and getThickness.
// setThickness) as public instance methods. Provide an overridden method
// getArea to calculate area of thick portion of circle.

#include<iostream>
using namespace std;

class Circle{
    private:
    float radius;

    public:
    void setRadius(float radius){
        this->radius = radius;
    }
    float getRadius(){
        return radius;
    }
    float getArea(){
        return (3.14*radius*radius);
    }
};

class Thickcircle: public Circle{
    private:
    float thickness;

    public:
    float getThickness(){
        return thickness;
    }
    void setThickness(float thickness){
        this->thickness = thickness;
    }
    float getArea(){
        float radius = getRadius();
        float area = (3.14 * radius * radius) - (3.14*(radius - thickness)*(radius - thickness));
        return area;
    }
};

int main(){
    Thickcircle c1;
    c1.setRadius(5);
    c1.setThickness(2);
    cout << c1.getArea() << endl;
    cout << c1.getRadius() << endl;
    cout << c1.getThickness() << endl;
    return 0;
}