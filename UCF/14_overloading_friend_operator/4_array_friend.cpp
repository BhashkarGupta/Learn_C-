// Consider the following class Array
// class Array
// {
// int *p;
// int size;
// public:
// // methods
// };
// Define operator = to perform deep copy of Array objects.
// define a friend operator + to concatenate two Array objects.

#include <iostream>
using namespace std;

class Array
{
private:
    int *p;
    int size;

public:
    Array(int size = 0) : size(size)
    {
        if (size >= 0)
        {
            if (size == 0)
            {
                p = nullptr;
            }
            else
            {
                p = new int[size];
            }
        }
        else
        {
            cout << "Size must be greater than or equal to 1\n";
        }
    }

    Array(int size, int dataArraary[]) : size(size)
    {
        if (size >= 0)
        {
            if (size == 0)
            {
                p = nullptr;
            }
            else
            {
                p = new int[size];
                for (int i = 0; i < size; i++)
                {
                    *(p + i) = dataArraary[i];
                }
            }
        }
        else
        {
            cout << "Size must be greater than or equal to 1\n";
        }
    }

    Array(const Array &temp)
    {
        size = temp.size;
        if (temp.size == 0)
        {
            p = nullptr;
        }
        else
        {
            p = new int[temp.size];
            for (int i = 0; i < size; i++)
            {
                *(p + i) = *(temp.p + i);
            }
        }
    }

    Array& operator=(const Array &temp)
    {
        size = temp.size;
        delete[] p;
        if (size > 0)
        {
            p = new int[size];
            for (int i = 0; i < size; i++)
            {
                *(p + i) = *(temp.p + i);
            }
        }
        else
        {
            p = nullptr;
        }
        return *this;
    }

    ~Array()
    {
        delete[] p;
        p = nullptr;
    }

    void showData()
    {
        if (size == 0)
        {
            cout << "[]" << endl;
        }
        else
        {
            cout << "[";
            for (int i = 0; i < size - 1; i++)
            {
                cout << *(p + i) << ", ";
            }
            cout << *(p + size - 1) << "]" << endl;
        }
    }

    void operator+=(const Array& temp){
        if (temp.size > 0)
        {
            if (size + temp.size> 0)
            {
                int *tempPointer = p;
                p = new int[size + temp.size];
                for (int i = 0; i < size; i++)
                {
                    *(p + i) = *(tempPointer + i);
                }
                for (int i = 0; i < temp.size; i++)
                {
                    *(p + size + i) = *(temp.p + i);
                }
                delete[] tempPointer;
                size += temp.size;
            }
        }
    }

    Array operator+(const Array& temp){
        Array tempArray = *this;
        tempArray += temp;
        return tempArray;
    }
};

int main() {
    // Test 1: Default constructor
    Array a1;
    cout << "Array a1 (default): ";
    a1.showData();

    // Test 2: Constructor with data
    int data1[] = {1, 2, 3};
    Array a2(3, data1);
    cout << "Array a2 (initialized with {1,2,3}): ";
    a2.showData();

    // Test 3: Copy constructor
    Array a3 = a2;
    cout << "Array a3 (copy of a2): ";
    a3.showData();

    // Test 4: Assignment operator
    int data2[] = {4, 5};
    Array a4(2, data2);
    cout << "Array a4 (before assignment): ";
    a4.showData();
    a4 = a2;
    cout << "Array a4 (after assignment from a2): ";
    a4.showData();

    // Test 5: operator+=
    int data3[] = {6, 7};
    Array a5(2, data3);
    cout << "Array a2 before += a5: ";
    a2.showData();
    a2 += a5;
    cout << "Array a2 after += a5: ";
    a2.showData();

    // Test 6: operator+
    int data4[] = {8, 9};
    Array a6(2, data4);
    Array a7 = a5 + a6;
    cout << "Array a5: ";
    a5.showData();
    cout << "Array a6: ";
    a6.showData();
    cout << "Array a7 = a5 + a6: ";
    a7.showData();

    // Test 7: Empty array addition
    Array a8;
    Array a9 = a8 + a6;
    cout << "Empty Array a8: ";
    a8.showData();
    cout << "Array a6: ";
    a6.showData();
    cout << "a9 = a8 + a6: ";
    a9.showData();

    return 0;
}

