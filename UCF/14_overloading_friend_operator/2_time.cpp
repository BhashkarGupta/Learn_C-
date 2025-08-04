// Define a class Time with appropriate instance variables and member functions.
// Overload following operators
// 1. << insertion operator
// 2. >> extraction operator
// over load operator= to perform copy of Time object.
#include <iostream>
using namespace std;

class Time{
    private:
        int hour, min, sec;
        void normalize(){
            if (sec/60 > 0)
            {
                min += sec/60;
                sec = sec%60;
            }
            if (min/60 > 0)
            {
                hour += min/60;
                min = min%60;
            }
        }

    public:
        Time(int hour=0, int min=0, int sec=0){
            this->hour = hour;
            this->min = min;
            this->sec = sec;
            normalize();
        }
        void showData(){
            cout << hour << ":" << min << ":" << sec << endl;
        }
        Time& operator=(const Time& temp){
            hour = temp.hour;
            min = temp.min;
            sec = temp.sec;
            return *this;
        }
        friend istream& operator>>(istream& cinput, Time& temp);
        friend ostream& operator<<(ostream& coutput, const Time& temp);
};

ostream& operator<<(ostream& coutput, const Time& temp){
    coutput<< temp.hour << ":" << temp.min << ":" << temp.sec;
    return coutput;
}

istream& operator>>(istream& cinput, Time& temp){
    cinput >> temp.hour >> temp.min >> temp.sec;
    temp.normalize();
    return cinput;
}

int main(){
    Time t1, t2;
    cout << "Enter a time: " << endl;
    cin >> t1;
    cout << t1 << endl;
    t2 = t1;
    cout << t2 << endl;
    return 0;
}