// Define a class Integer with instance variable of type int. Provide a friend logical
// operator not !. Also define a friend operator == to compare two Integer objects.

#include<iostream>
using namespace std;

class Integer{
    private:
    int i;

    public:
    Integer(int a=0){
        i = a;
    }
    friend bool operator!(Integer temp);
    friend bool operator==(Integer userInput1, Integer userInput2);
};

bool operator!(Integer temp){
    return !(temp.i);
}

bool operator==(Integer userInput1, Integer userInput2){
    if (userInput1.i == userInput2.i)
    {
        return true;
    }else{
        return false;
    }
}

int main() {
    Integer a(0);
    Integer b(5);
    Integer c(5);

    cout << "!a = " << (!a ? "true" : "false") << endl;
    cout << "!b = " << (!b ? "true" : "false") << endl;

    cout << "b == c: " << (b == c ? "true" : "false") << endl;
    cout << "a == b: " << (a == b ? "true" : "false") << endl;

    return 0;
}