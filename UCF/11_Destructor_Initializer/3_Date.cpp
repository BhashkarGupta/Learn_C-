// Define a class Date with d, m, y as instance variables. Initialise members using
// initialisers.

#include<iostream>
using namespace std;

class Date{
    private:
        int d, m, y;
    
    public:
        Date(int d, int m, int y):d(d), m(m), y(y){}

        void showDate(){
            cout << "Date: " << d << "-" << m << "-" << y << endl;
        }
};

int main(){
    Date date(3, 5, 2025);
    date.showDate();
    return 0;
}