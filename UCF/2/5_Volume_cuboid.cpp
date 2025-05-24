// Write a C++ program to calculate the volume of a cuboid. 
#include <iostream>

using namespace std;

int main(){
    float length, width, height;
    cout << "Enter the length, width and height of the cuboid\n";
    cin >>  length >> width >> height;
    cout << "The Volume of Cuboid is " << length * width * height << endl;
}