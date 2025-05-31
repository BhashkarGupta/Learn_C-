// Define a function to rotate an array by n positions in the d direction. 
// Implement position and direction using default arguments. Argument d can 
// be -1 or 1 denoting left or right direction. Argument n should be the last 
// argument with default value 1.

#include<iostream>
using namespace std;

void RotateArray(int array[], int arraySize, int direction, int position){
    int tempArray[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        tempArray[i] = array[i];
    }
    if (direction == 1)
    {
        for (int i = 0; i < arraySize; i++)
        {
            array[i] = tempArray[(i+position)%arraySize];
        }
    }else if (direction == -1)
    {
        for (int i = 0; i < arraySize; i++)
        {
            array[i] = tempArray[(arraySize-position+i)%arraySize];
        }
    }
}


int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int direction1 = -1;
    int position1 = 2;
    RotateArray(array1, size1, direction1, position1);
    for (int i = 0; i < size1; i++) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    int array2[] = {10, 20, 30, 40, 50, 60};
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int direction2 = 1;
    int position2 = 3;
    RotateArray(array2, size2, direction2, position2);
    for (int i = 0; i < size2; i++) {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}