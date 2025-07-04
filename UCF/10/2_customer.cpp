// Define a class Customer with instance members cust_id, name, email, mobile.
// Define non parameterised constructor and parameterised constructor in the class.

#include<iostream>
#include<string>
using namespace std;

class Customer{
    private:
        int cust_id;
        string name, email;
        long mobile;

    public:
        Customer(){}
        Customer(int id, string custName, string custEmail, long custMobile){
            cust_id = id;
            name = custName;
            email = custEmail;
            mobile = custMobile;
        }
    
        void DisplayCustomer(){
            cout << "Customer ID: " << cust_id << endl;
            cout << "Customer Name: " << name << endl;
            cout << "Customer Email: " << email << endl;
            cout << "Customer Mobile Number: " << mobile << endl;
        }

        void SetData(int id, string custName, string custEmail, long custMobile){
            cust_id = id;
            name = custName;
            email = custEmail;
            mobile = custMobile;
        }
};

int main(){
    Customer customer1;
    Customer customer2(101, "Bhashkar", "bhashkar@gmail.com", 7875556980);
    customer1.SetData(102, "Shubham", "shubham@gmail.com", 7444526222);

    customer1.DisplayCustomer();
    cout << endl;
    customer2.DisplayCustomer();
    return 0;
}