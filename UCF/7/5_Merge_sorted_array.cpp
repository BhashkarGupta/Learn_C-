// Define a function to merge two sorted arrays of same size.
#include<iostream>
using namespace std;

void MergeSortedArray(int Array1[], int Array2[], int mergedArray[], int arraySize){
    int counter1 = 0,  counter2 = 0, mergedCounter = 0;
    while (counter1 < arraySize && counter2 < arraySize)
    {
        if (Array1[counter1] < Array2[counter2])
        {
            mergedArray[mergedCounter] = Array1[counter1];
            counter1++;
        }else{
            mergedArray[mergedCounter] = Array2[counter2];
            counter2++;
        }
        mergedCounter++;
    }
    while (counter1 < arraySize)
    {
        mergedArray[mergedCounter] = Array1[counter1];
        counter1++;
        mergedCounter++;
    }
    while (counter2 < arraySize)
    {
        mergedArray[mergedCounter] = Array2[counter2];
        counter2++;
        mergedCounter++;
    }
    
}

int main() {
    const int size = 6;

    int Array1[size] = {-10, -5, 0, 0, 3, 7};
    int Array2[size] = {-8, -5, 0, 4, 6, 7};
    int mergedArray[2 * size];

    MergeSortedArray(Array1, Array2, mergedArray, size);

    for (int i = 0; i < 2 * size; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    int Array3[size] = {1, 1, 1, 1, 1, 1};
    int Array4[size] = {1, 1, 1, 1, 1, 1};
    MergeSortedArray(Array3, Array4, mergedArray, size);

    for (int i = 0; i < 2 * size; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    int Array5[size] = {-100, -50, -25, 0, 25, 50};
    int Array6[size] = {60, 70, 80, 90, 100, 110};
    MergeSortedArray(Array5, Array6, mergedArray, size);

    for (int i = 0; i < 2 * size; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}