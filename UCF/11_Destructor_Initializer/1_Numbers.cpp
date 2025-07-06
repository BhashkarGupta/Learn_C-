// Define a class Numbers with size and arr pointer as instance variables. Provide
// constructor to initialise instance members, dynamically allocate an array of given
// size and store address in arr variable of object. Also define destructor to deallocate
// memory of array. Implement deep copy using copy constructor to avoid memory
// issues.

#include <iostream>
using namespace std;

class Numbers
{
private:
    int size;
    int *array;

public:
    Numbers(int size) : size(size)
    {
        if (size != 0)
        {
            array = (int *)malloc(4 * size); // new way: array = new int[size];
        }
        else
        {
            array = nullptr;
        }
    }

    Numbers(const Numbers &num){ // use dereference to prevent loop
        size = num.size;
        if (num.array != nullptr)
        {
            array = (int *)malloc(4 * size);
            if (array != nullptr)
            {
                for (int i = 0; i < size; i++)
                {
                    *(array + i) = *(num.array + i);
                }
            }
        }
        else
        {
            array = nullptr;
        }
    }

    ~Numbers()
    {
        free(array);
        array = nullptr;
    }

    Numbers(int size, int dataArray[]) : size(size)
    {
        if (size != 0)
        {
            array = (int *)malloc(4 * size);
            if (array != nullptr)
            {
                for (int i = 0; i < size; i++)
                {
                    *(array + i) = dataArray[i];
                }
            }
        }
        else
        {
            array = nullptr;
        }
    }

    void updateNumbers(int size, int dataArray[]){
        if (size == this->size)
        {
            for (int i = 0; i < size; i++)
            {
                *(array + i) = dataArray[i];
            }
        }else
        {
            cout << "size does not match, cancelling operation" << endl;
        }
    }

    void showData(){
        if (size == 0)
        {
            cout << "[]" << endl;
        }else{
            cout << "[";
            for (int i = 0; i < size-1; i++)
            {
                cout << *(array + i) << ", ";
            }
            cout << *(array + size -1) << "]" << endl;
        }
    }
};

// int main(){
//     int testData [] = {2, 5, 23, 56, 27};
//     Numbers num(5, testData);
//     num.showData();
//     int newData[] = {101, 102, 103, 104, 105};
//     num.updateNumbers(5, newData);
//     num.showData();
//     return 0;
// }

int main() {
    cout << "--- Test Case 1: Constructor (int size) ---" << endl;
    Numbers n1(5);
    n1.showData();

    cout << "\n--- Test Case 2: Constructor (int size) with size 0 ---" << endl;
    Numbers n0(0);
    n0.showData();

    cout << "\n--- Test Case 3: Constructor (int size, int dataArray[]) ---" << endl;
    int initialData[] = {10, 20, 30, 40};
    Numbers n2(4, initialData);
    n2.showData();

    cout << "\n--- Test Case 4: Constructor (int size, int dataArray[]) with size 0 ---" << endl;
    int emptyData[] = {};
    Numbers n3(0, emptyData);
    n3.showData();

    cout << "\n--- Test Case 5: Copy Constructor ---" << endl;
    Numbers n4 = n2;
    cout << "n2: ";
    n2.showData();
    cout << "n4: ";
    n4.showData();

    int newDataForN4[] = {50, 60, 70, 80};
    n4.updateNumbers(4, newDataForN4);
    cout << "After modifying n4:" << endl;
    cout << "n2: ";
    n2.showData();
    cout << "n4: ";
    n4.showData();

    cout << "\n--- Test Case 6: updateNumbers method ---" << endl;
    int updateData[] = {1, 2, 3, 4, 5};
    n1.updateNumbers(5, updateData);
    n1.showData();

    cout << "\n--- Test Case 7: updateNumbers with size mismatch ---" << endl;
    int wrongSizeData[] = {99, 88};
    n1.updateNumbers(2, wrongSizeData);
    n1.showData();

    cout << "\n--- End of tests.---" << endl;

    return 0;
}