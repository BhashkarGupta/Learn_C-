// 2. Define a class Shape with member variable to store name of the shape (like rectangle, square, circle, etc.) 
// Provide methods to set and display name of the shape. Define a pure virtual function area() in Shape class. 
// Define two derived classes of Shape, one is rectangle and second is square. Define appropriate members in 
// both the classes. Demonstrate usage of the classes by making driver function main().

#include<iostream>
#include<string>
using namespace std;

class Shape{
    private:
    string name;

    protected:
    void setShape(string name){
        this->name = name;
    }
    void dispayShape(){
        cout << "Shape: " << name << endl;
    }

    virtual float area() = 0;
};

class Rectangle: public Shape{
    private:
    float length, width;

    public:
    Rectangle(float lenght, float width, string name):length(lenght), width(width){
        setShape(name);
    }
    float area(){
        return length * width;
    }
    void showData(){
        dispayShape();
        cout << "Length: " << length << endl << "width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

class Square: public Shape{
    private:
    float side;

    public:
    Square(float side, string name):side(side){
        setShape(name);
    }
    float area(){
        return side * side;
    }
    void showData(){
        dispayShape();
        cout << "Side: " << side << endl;
        cout << "Area: " << area() << endl;
    }
};

int main(){
    Rectangle rec(5, 4, "Rec1");
    rec.showData();
    Square sqr(4, "Square");
    sqr.showData();
    return 0;
}