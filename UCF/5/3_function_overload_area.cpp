// Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;

float Area(float radius){
    return 3.14 * radius *radius;
}

float Area(float length, float width){
    return length * width;
}

float Area(float base, float height, bool isTrianle){
    return 0.5 * base * height;
}

int main(){
    cout << "Area of Circle of radius 5 : " << Area(5) << endl;
    cout << "Area of Rectangle 5.41 as height and 2.3 as width : " << Area(5.41, 2.3) << endl;
    cout << "Area of Triangle of base 7 and 2.1 as it's height : " << Area(7, 2.1, true) << endl; 
}