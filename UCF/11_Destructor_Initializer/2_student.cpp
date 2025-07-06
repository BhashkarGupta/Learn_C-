// Define a class student and write a program to enter student details using
// constructor and define member function to display all the details.
#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        int stdID, stdRoll, stdClass;
        string name;
        long mobileNo;

    public:
        Student(int stdID, int stdRoll, int stdClass, string name, long mobileNo):stdID(stdID), stdRoll(stdRoll), stdClass(stdClass), name(name), mobileNo(mobileNo){}

        void showData(){
            cout << "Student Details: " << endl;
            cout << "ID: " << stdID << endl;
            cout << "Roll: " << stdRoll << endl;
            cout << "Class: " << stdClass << endl;
            cout << "Name: " << name << endl;
            cout << "Mobile Number: " << mobileNo << endl;
        }
};

int main() {
    Student s1(101, 15, 10, "Bhashkar Gupta", 9876543210L);// add L to make it long literal, it compiler may consider the actual argument as int 
    s1.showData();

    cout << "\n--- Another Student ---" << endl;
    Student s2(102, 22, 11, "Shubham Kumar", 9123456789L);
    s2.showData();

    return 0;
}