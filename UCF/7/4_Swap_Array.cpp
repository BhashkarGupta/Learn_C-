// Define a function to swap two arrays.
#include<iostream>
#include<string>

using namespace std;

void SwapArray(string stringArray1[], string stringArray2[], int arraySize){
    string temp;
    for (int i = 0; i < arraySize; i++)
    {
        temp = stringArray1[i];
        stringArray1[i] = stringArray2[i];
        stringArray2[i] = temp;
    }
}

void SwapArray(int intArray1[], int intArray2[], int arraySize){
    int temp;
    for (int i = 0; i < arraySize; i++)
    {
        temp = intArray1[i];
        intArray1[i] = intArray2[i];
        intArray2[i] = temp;
    }
}


int main() {
    const int size = 3;

    int intArr1[size] = {1, 2, 3};
    int intArr2[size] = {4, 5, 6};

    cout << "Before swapping int arrays:\n";
    cout << "intArr1: ";
    for (int i = 0; i < size; i++) cout << intArr1[i] << " ";
    cout << "\nintArr2: ";
    for (int i = 0; i < size; i++) cout << intArr2[i] << " ";
    cout << endl;

    SwapArray(intArr1, intArr2, size);

    cout << "After swapping int arrays:\n";
    cout << "intArr1: ";
    for (int i = 0; i < size; i++) cout << intArr1[i] << " ";
    cout << "\nintArr2: ";
    for (int i = 0; i < size; i++) cout << intArr2[i] << " ";
    cout << endl << endl;

    string strArr1[size] = {"apple", "banana", "cherry"};
    string strArr2[size] = {"xray", "yankee", "zulu"};

    cout << "Before swapping string arrays:\n";
    cout << "strArr1: ";
    for (int i = 0; i < size; i++) cout << strArr1[i] << " ";
    cout << "\nstrArr2: ";
    for (int i = 0; i < size; i++) cout << strArr2[i] << " ";
    cout << endl;

    SwapArray(strArr1, strArr2, size);

    cout << "After swapping string arrays:\n";
    cout << "strArr1: ";
    for (int i = 0; i < size; i++) cout << strArr1[i] << " ";
    cout << "\nstrArr2: ";
    for (int i = 0; i < size; i++) cout << strArr2[i] << " ";
    cout << endl;

    return 0;
}