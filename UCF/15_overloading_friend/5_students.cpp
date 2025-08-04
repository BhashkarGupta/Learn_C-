// Define a class Student with roll no, name and age as instance variables. Create
// setStudent) and showStudent) methods in the class. Overload operator == to
// compare two Student objects.

#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    int roll, age;
    string name;

    public:
    Student():roll(0), age(0), name(""){}
    Student(int roll, int age, string name):roll(roll), age(age), name(name){}

    void setStudent(int roll, int age, string name){
        this->roll = roll;
        this->age = age;
        this->name = name;
    }

    void showStudent(){
        cout << "Student roll : " << roll << endl;
        cout << "Student age : " << age << endl;
        cout << "Student name : " << name << endl;
    }

    bool operator==(const Student& student){
        bool response = true;
        if(roll != student.roll)
        {
            cout << "roll does not match\n";
            response = false;
        }
        if(age != student.age)
        {
            cout << "age does not match\n";
            response = false;
        }
        if(name != student.name){
            cout << "name does not match\n";
            response = false;
        }
        return response;
    }

    friend ostream& operator<<(ostream& coutput,const Student& temp);
};

ostream& operator<<(ostream& coutput,const Student& temp){
    coutput << "Student roll : " << temp.roll << "\nStudent age : " << temp.age << "\nStudent name : " << temp.name << endl;
    return coutput;
}

int main() {
    Student s1;  
    s1.setStudent(101, 20, "Bhaskar Gupta");

    Student s2(101, 20, "Bhashkar Gupta");
    Student s3(102, 21, "Shubham kumar");

    cout << "Student 1:\n" << s1;
    cout << "Student 2:\n" << s2;
    cout << "Student 3:\n" << s3;

    cout << "\nComparing s1 and s2:\n";
    if (s1 == s2)
        cout << "s1 and s2 are equal.\n";
    else
        cout << "s1 and s2 are NOT equal.\n";

    cout << "\nComparing s1 and s3:\n";
    if (s1 == s3)
        cout << "s1 and s3 are equal.\n";
    else
        cout << "s1 and s3 are NOT equal.\n";

    return 0;
}
