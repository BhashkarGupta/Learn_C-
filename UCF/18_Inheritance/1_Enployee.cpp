// Define a class Person with name and age as instance variables as private
// members. Provide setters and getters as protected methods. Derive a class
// Employee from Person class with private instance variable salary. Provide public
// methods setEmployee() and showEmployee()

#include<iostream>
#include<string>
using namespace std;

struct Emp{
    string name;
    int age;
    float salary;
};

class Person{
    private:
    string name;
    int age;

    protected:
    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
    }
    string getName(){
        return name;
    }
};

class Employee:public Person{
    private:
    float salary;

    public:
    void setEmployee(string name, int age, float salary){
        setName(name);
        setAge(age);
        this->salary = salary;
    }
    Emp getEmployee(){
        Emp tempEmp;
        tempEmp.name = this->getName();
        tempEmp.age = this->getAge();
        tempEmp.salary = this->salary;
        return tempEmp;
    }
};

int main(){
    Employee emp1;
    emp1.setEmployee("Shubham", 20, 400000.00);
    Emp emp1Data = emp1.getEmployee();
    cout << "Name : " << emp1Data.name << endl;
    cout << "Age : " << emp1Data.age << endl;
    cout << "Salary : " << emp1Data.salary << endl;
    return 0;
}