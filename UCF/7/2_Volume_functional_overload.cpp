// Define overloaded functions to calculate volume of a cuboid, cone and sphere
#include<iostream>
using namespace std;

float Volume(float length, float width, float height){
    return length * width * height;
}

float Volume(float radius, float height){
    float volume = (3.14 * radius * radius * height)/3;
    return volume;
}

float Volume(float radius){
    float volume = (3.14 * 4 * radius * radius * radius)/3;
    return volume;
}

int main() {
    float cuboidVol = Volume(4.0f, 5.0f, 6.0f);
    float coneVol = Volume(3.0f, 7.0f);
    float sphereVol = Volume(3.0f);

    cout << "Cuboid Volume: " << cuboidVol << endl;
    cout << "Cone Volume: " << coneVol << endl;
    cout << "Sphere Volume: " << sphereVol << endl;

    return 0;
}