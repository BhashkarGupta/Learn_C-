// Write a C++ program to add all the numbers of an array of size 10.
#include <iostream>
using namespace std;

int main(){
    int result = 0;
    int array[] = {10, 20, 30, 40, 50};
    for(int arrayElement: array){
        result += arrayElement;
    }
    cout << "The sum of the array element is " << result << endl;
    return 0;
}