// Define a C++ function to sort an array of integers in ascending or descending order depending on bool type argument (true for ascending and false for descending).
// Use default argument to implement it.

#include<iostream>
using namespace std;

void Sort(int array[], int arraySize, bool isAscending = true){
    for (int i = 1; i < arraySize; i++)
    {
        for (int j = 1; j < arraySize - i + 1; j++)
        {
            if (isAscending)
            {
                if (array[j] < array[j-1])
                {
                    int temp = array[j];
                    array[j] = array[j-1];
                    array[j-1] = temp;
                } 
            }else{
                if (array[j] > array[j-1])
                {
                    int temp = array[j];
                    array[j] = array[j-1];
                    array[j-1] = temp;
                }
            }
        }
    }
}

void PrintArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int data[] = {45, 12, 78, 34, 23};
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Original array: ";
    PrintArray(data, size);

    Sort(data, size, true);
    cout << "Sorted in ascending order: ";
    PrintArray(data, size);

    // Reset array 
    int data2[] = {45, 12, 78, 34, 23};

    Sort(data2, size, false);
    cout << "Sorted in descending order: ";
    PrintArray(data2, size);

    return 0;
}