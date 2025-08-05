// Define a class Person with name and age as instance variables. Provide
// parameterised constructor with two formal arguments name & age, to initialise
// instance variables.

#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
    int age;
    string name;

    public:
    Person(int age, string name):age(age), name(name){}

    friend istream& operator>>(istream& in, Person& perObj);
    friend ostream& operator<<(ostream& out, const Person& perObj);
};

istream& operator>>(istream& in, Person& perObj){
    in >> perObj.age >> perObj.name;
    return in;
}

ostream& operator<<(ostream& out, const Person& perObj){
    out << "Name : " << perObj.name << "\nAge : " << perObj.age << endl;
    return out;
}

int main(){
    Person p1(22, "Mohan Kumar");
    cout << p1;
    return 0;
}