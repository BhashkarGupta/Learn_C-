// Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.
#include<iostream>
using namespace std;

class Time{
    private:
    int hour;
    int min;
    int sec;

    public:
    void setTime(int Hour, int Min, int Sec){
        hour = Hour;
        min =  Min;
        sec = Sec;
    }
    void getTime(){
        cout << hour << "hh : " << min << " mm : " << sec << " ss " << endl;
    }
};

int main(){
    Time 
}