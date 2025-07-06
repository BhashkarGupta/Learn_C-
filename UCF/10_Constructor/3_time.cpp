// Define a class Time with hr,min,sec as instance member variables. Define
// constructor to initialise time object.
#include<iostream>
using namespace std;

class Time{
    private:
        int hr, min, sec;

    public:
        Time(int hour, int minute, int second){
            hr = hour;
            min = minute;
            sec = second;
        }

        void DisplayTime(){
            cout << "Time: " << hr << ":" << min << ":" << sec << endl;
        }
};

int main(){
    Time time(12, 6 , 30);
    time.DisplayTime();
    return 0;
}