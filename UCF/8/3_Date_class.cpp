// Define a class Date to represent date (like d=31, m=12, y=2022). Declare
// appropriate number of instance member variables and also define instance member
// functions to set date and get date.
// In question 3, define a methods to display date in the following pattern
// 1. 31-12-2022
// 2. 31-Dec-2022

#include<iostream>
using namespace std;

class Date{
    private:
    int d, m, y;
    
    public:
    void setDate(int date, int month, int year){
        d = date;
        m = month;
        if (year < 100)
        {
            y = year + 2000;
        }else{
            y = year;
        }
    }

    void getDate(int longFormat = 0){
        if (longFormat)
        {
            string month;
            switch (m)
            {
            case 1:
                month = "Jan";
                break;
            
            case 2:
                month = "Feb";
                break;
            case 3:
                month = "Mar";
                break;
            case 4:
                month = "Apr";
                break;
            case 5:
                month = "May";
                break;
            case 6:
                month = "Jun";
                break;
            case 7:
                month = "Jul";
                break;
            case 8:
                month = "Aug";
                break;
            case 9:
                month = "Sep";
                break;
            case 10:
                month = "Oct";
                break;
            case 11:
                month = "Nov";
                break;
            case 12:
                month = "Dec";
                break;
            default:
                break;
            }
            cout << d << "-" << month << "-" << y <<endl;
        }else{
            cout << d << "-" << m << "-" << y << endl;
        }
    }
};


int main(){
    Date date;
    date.setDate(2, 6, 2025);
    date.getDate();
    date.getDate(1);
    return 0;
}