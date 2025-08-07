// Define a class Time with instance variables hr, min and sec. Provide instance
// methods setTime) and showTime). setTime() method has formal arguments with
// the same name as instance variables. Also define setters and getters.
// Define a method to dynamically create an array of Time objects with
// specified size (received through argument) and return array.
// Define a method to sort Time object array.
// Define a method to display Time object array values. Array is received
// through argument.

#include <iostream>
using namespace std;

class Time
{
private:
    int hr, min, sec;
    void normalize()
    {
        if (sec / 60 > 0)
        {
            min += sec / 60;
            sec = sec % 60;
        }
        if (min / 60 > 0)
        {
            hr += min / 60;
            min = min % 60;
        }
    }

public:
    void setTime(int hr, int min, int sec)
    {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
        normalize();
    }

    void showTime()
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }

    Time operator=(const Time &t)
    {
        hr = t.hr;
        min = t.min;
        sec = t.sec;
        return *this;
    }

    bool operator>(const Time &temp)
    {
        if (hr > temp.hr)
        {
            return true;
        }
        else if (hr == temp.hr)
        {
            if (min > temp.min)
            {
                return true;
            }
            else if (min == temp.min)
            {
                if (sec > temp.sec)
                {
                    return true;
                }
            }
        }
        return false;
    }

    friend ostream &operator<<(ostream &out, const Time &temp);
    friend istream &operator>>(istream &in, Time &temp);
};

ostream &operator<<(ostream &out, const Time &temp)
{
    out << temp.hr << ":" << temp.min << ":" << temp.sec;
    return out;
}

istream &operator>>(istream &in, Time &temp)
{
    in >> temp.hr >> temp.min >> temp.sec;
    temp.normalize();
    return in;
}

class TimeArray
{
private:
    Time *T = nullptr;
    int size;

public:
    TimeArray(int size) : size(size)
    {
        if (size > 0)
        {
            T = new Time[size];
            for (int i = 0; i < size; i++)
            {
                Time temp;
                cout << "Please enter time for " << i << " place\n";
                cin >> temp;
                *(T + i) = temp;
            }
        }
    }

    TimeArray(int size, Time array[]) : size(size)
    {
        if (size > 0)
        {
            T = new Time[size];
            for (int i = 0; i < size; i++)
            {
                *(T + i) = array[i];
            }
        }
    }

    TimeArray &sort()
    {
        for (int i = 0; i < size; i++)
        {
            int temp = i;
            for (int j = i + 1; j < size; j++)
            {
                if (*(T + j) > *(T + temp))
                {
                    temp = j;
                }
            }
            if (i != temp)
            {
                Time swap = *(T + temp);
                *(T + temp) = *(T + i);
                *(T + i) = swap;
            }
        }
        return *this;
    }

    friend ostream &operator<<(ostream &out, const TimeArray &tArray);
};

ostream &operator<<(ostream &out, const TimeArray &tArray)
{
    out << "[ ";
    for (int i = 0; i < tArray.size - 1; i++)
    {
        out << *(tArray.T + i) << ", ";
    }
    out << *(tArray.T + tArray.size - 1) << " ]\n";
    return out;
}

int main()
{
    cout << "Please Enter the size of the array: \n";
    int size;
    cin >> size;
    TimeArray T_Array(size);
    cout << T_Array;
    T_Array.sort();
    cout << T_Array;
    return 0;
}