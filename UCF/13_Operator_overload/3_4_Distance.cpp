// 3. Consider a class Distance
// class Distance
// {
// int km, m, cm;
// public:
// //methods;
// };
// Overload the operator+ to add two distance objects.
// 4. In Question-3, define operator pre decrement and post decrement to decrease distance by 1 cm.

#include<iostream>
using namespace std;

class Distance{
    private:
        int km, m, cm;
        void normalise(){
            if (cm>99)
            {
                m += cm/100;
                cm = cm%100;
            }
            if (m>999)
            {
                km += m/1000;
                m = m%1000;
            }
        }
    
    public:
        Distance(int km=0, int m=0, int cm=0):km(km), m(m), cm(cm){
            normalise();
        }
        Distance(const Distance &distance){
            km = distance.km;
            m = distance.m;
            cm = distance.cm;
        }
        Distance operator--(){
            if (cm==0)
            {
                if (m==0)
                {
                    km--;
                    m += 999;
                    cm += 99;
                }else{
                    m--;
                    cm += 99;
                }
            }else{
                cm--;
            }
            Distance temp(km, m, cm);
            return temp;
        }
        Distance operator--(int){
            Distance temp(km, m, cm);
            if (cm==0)
            {
                if (m==0)
                {
                    km--;
                    m += 999;
                    cm += 99;
                }else{
                    m--;
                    cm += 99;
                }
            }else{
                cm--;
            }
            return temp;
        }
        Distance operator+(Distance distance){
            Distance temp;
            temp.cm = distance.cm + cm;
            temp.m = distance.m + m;
            temp.km = distance.km + km;
            temp.normalise();
            return temp;
        }
        void showDistance(){
            cout << "KM = " << km << endl;
            cout << "M = " << m << endl;
            cout << "Cm = " << cm << endl;
        }
};

int main(){
    Distance d1(1, 300, 150), d2(20, 280, 300);
    Distance d3 = d1 + d2;
    d3.showDistance();
    cout << "-------------\n";
    d3.operator--();
    d3--;
    --d3;
    d3.showDistance();
    return 0;
}