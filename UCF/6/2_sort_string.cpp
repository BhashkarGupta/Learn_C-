// Define a function to sort an array of strings in ascending or descending order depending on bool type argument (true for ascending and false for descending).
// Use default argument to implement it.

#include<iostream>
#include<string>
using namespace std;

void Sort(string array[], int arrayLength, bool isAscending){
    for (int i = 1; i < arrayLength; i++)
    {
        int tempIndex = i-1;
        for (int j = i; j < arrayLength; j++)
        {
            if (isAscending)
            {
                if (array[tempIndex] > array[j])
                {
                    tempIndex = j;
                }
            }else{
                if (array[tempIndex] < array[j])
                {
                    tempIndex = j;
                }
            }
        }
        if (tempIndex != i-1)
        {
            string temp = array[tempIndex];
            array[tempIndex] = array[i-1];
            array[i-1] = temp;
        }
    }
}

void PrintString(string array[], int arrayLenght){
    for (int i = 0; i < arrayLenght; i++)
    {
        cout << array[i] << endl;
    } 
}

int main() {
    string words[] = {"banana", "apple", "cherry", "date"};
    int length = sizeof(words) / sizeof(words[0]);

    cout << "Sorting in Ascending : " << endl;
    Sort(words, length, true);
    PrintString(words, length);

    cout << endl << "Sorting in Descending : " << endl;
    Sort(words, length, false);
    PrintString(words, length);

    return 0;
}