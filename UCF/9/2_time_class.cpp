// Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// 1. void setTime(int,int,int)
// 2. void showTime()
// 3. void normalize)
// 4. Time add(Time)
// 5. bool is_greater(Time)

#include <iostream>
using namespace std;

class Time
{
private:
    int h, m, s;

public:
    void setTime(int hour, int min, int sec)
    {
        h = hour;
        m = min;
        s = sec;
    }

    void showTime()
    {
        cout << h << ":" << m << ":" << s << endl;
    }

    void normalize()
    {
        if (s / 60 > 0)
        {
            m += s / 60;
            s %= 60;
        }
        if (m / 60 > 0)
        {
            h += m / 60;
            m %= 60;
        }
    }

    Time add(Time t)
    {
        Time temp;
        temp.setTime(t.h + h, t.m + m, t.s + s);
        temp.normalize();
        return temp;
    }

    bool isGreater(Time t)
    {
        normalize();
        t.normalize();
        if (h > t.h)
            return true;
        if (h < t.h)
            return false;
        if (m > t.m)
            return true;
        if (m < t.m)
            return false;
        return s > t.s;
    }
};

int main() {
    Time t1, t2, t3;

    t1.setTime(1, 120, 90); 
    t2.setTime(2, 59, 31);  

    t1.showTime();
    t2.showTime();

    t3 = t1.add(t2);
    t3.showTime();

    if (t1.isGreater(t2)) {
        cout << "t1 is greater than t2" << endl;
    } else {
        cout << "t2 is greater than or equal to t1" << endl;
    }

    return 0;
}
