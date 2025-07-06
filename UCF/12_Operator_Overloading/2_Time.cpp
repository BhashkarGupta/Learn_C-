// Create a class Time which contains hour, min and second as fields. Overload greater than. (>) operator to compare two time objects.
// In Question-2, overload pre-increment and post-increment operator to increment
// Time object value by one second.
// In Question-2, overload operator+ to add two Time objects.
#include<iostream>
using namespace std;

class Time{
    private:
        int hour, min, second;
        void normalize(){
            if (second/60 > 0)
            {
                min += second/60;
                second = second%60;
            }
            if (min/60 > 0)
            {
                hour += min/60;
                min = min%60;
            }
        }
    
    public:
        Time(int hour, int min, int second):hour(hour), min(min), second(second){
            normalize();
        }
        bool operator>(Time time){
            if (hour>time.hour)
            {
                return true;
            }
            if (hour == time.hour && min > time.min)
            {
                return true;
            }
            if (hour == time.hour && min == time.min && second > time.second)
            {
                return true;
            }
            return false;
        }
        void showData(){
            cout << hour << ":" << min << ":" << second << endl;
        }
        void operator++(){
            second++;
            normalize();
        }
        Time operator+(Time time){
            Time temp(hour+time.hour, min+time.min, second+time.second);
            return temp;
        }
};

int main(){
    Time t1(20, 40, 200), t2(100, 200, 10), t3(20, 40, 100);
    if (t1>t2)
    {
        cout << "True" << endl;
    }else{
        cout << "Flase" << endl;
    }
    if (t1>t3)
    {
        cout << "True" << endl;
    }else{
        cout << "Flase" << endl;
    }
    Time t4 = t1 + t2;
    t4.showData();
    t4.operator++();
    t4.showData();

    return 0;
}