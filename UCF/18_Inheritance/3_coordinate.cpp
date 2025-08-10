// Define a class Coordinate with x and y as instance variables. Define overloaded
// versions of getDistance(), first with no argument calculating distance from origin,
// and second with one argument of Coordinate type to calculate distance between
// two coordinates. Also define other methods if required.
// Define a class Shape with shapeName as instance variable. Provide setter and
// getter.
// derive a class StraightLine from Shape with two Coordinate type
// objects as instance members. Provide method to setLine(), getDistance() and
// showLine()

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class Coordinate{
    private:
    int x, y;

    public:
    Coordinate(int x=0, int y=0):x(x), y(y){}
    void setCoordinate(int x, int y){
        this->x = x;
        this->y = y;
    }
    int getXCoordinate(){
        return x;
    }
    int getYCoordinate(){
        return y;
    }
    float getDistance(){
        float distance;
        distance = sqrtf((x*x) - (y*y));
        return distance;
    }
    float getDistance(const Coordinate& c){
        float distance;
        distance = sqrtf(pow(c.x - x, 2) + pow(c.y - y, 2));
        return distance;
    }
};

class Shape{
    private:
    string shapeName;

    public:
    void setName(string name){
        shapeName = name;
    }
    string getName(){
        return shapeName;
    }
};

class StraightLine:public Shape{
    private:
    Coordinate p1, p2;

    public:
    void setLine(string name, int x1, int y1, int x2, int y2){
        this->setName(name);
        p1.setCoordinate(x1, y1);
        p2.setCoordinate(x2, y2);
    }
    float getDistance(){
        return p1.getDistance(p2);
    }
    void showLine(){
        cout << "p1(" << p1.getXCoordinate() << ", " << p1.getYCoordinate() << "), p2(" << p2.getXCoordinate() << ", " << p2.getYCoordinate() << ")\n";
    }
};

int main(){
    StraightLine s1;
    s1.setLine("line1", 0, 3, 4, 0);
    cout << s1.getDistance() << endl;
    s1.showLine();
    return 0;
}