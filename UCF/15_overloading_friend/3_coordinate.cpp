// Create a Coordinate class with 2 instance variables x and y. Overload comma
// operator such that when you write c3 = (c1, c2 ) then c2 is assigned to c3. Where
// c1, c2,and c3 are objects of Coordinate class.
// In Question-3, provide overloaded insertion and extraction operators.

#include<iostream>
using namespace std;

class Coordinate{
    private:
    int X, Y;

    public:
    Coordinate(int X=0, int Y=0):X(X), Y(Y){}

    Coordinate operator,(Coordinate C){
        Coordinate temp;
        temp.X = C.X;
        temp.Y = C.Y;
        return temp;
    }

    void showData(){
        cout << "x = " << X << "\ny = " << Y << endl;
    }

    friend istream& operator>>(istream& cinput, Coordinate& temp);
    friend ostream& operator<<(ostream& coutput, const Coordinate& temp);
};

istream& operator>>(istream& cinput, Coordinate& temp){
    cinput >> temp.X >> temp.Y;
    return cinput;
}

ostream& operator<<(ostream& coutput, const Coordinate& temp){
    coutput << "x = " << temp.X << "\ny = " << temp.Y << endl;
    return coutput;
}

int main() {
    Coordinate c1(1, 2);
    Coordinate c2;
    cout << "Enter cordinate x, y: \n";
    cin >> c2;
    Coordinate c3;

    c3 = (c1, c2); 

    cout << "c3 values after c3 = (c1, c2):" << endl;
    c3.showData();  
    cout << c3;

    return 0;
}
