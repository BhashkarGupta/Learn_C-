// 5. Consider the following class Array
// class Array
// {
// int *p;
// int size;
// public:
// // methods
// };
// Define constructor to allocate an array of given size (size is given through parameter).
// Define a subscript operator to access element at given index. Define destructor to deallocates the memory of array.
#include <iostream>
using namespace std;

class Array
{
private:
    int *p;
    int size;

public:
    Array(int size, int *data)
    {
        if (size < 1)
        {
            p = nullptr;
            this->size = 0;
        }
        else
        {
            p = (int *)malloc(4 * this->size);
            for (int i = 0; i < this->size; i++)
            {
                *(p + i) = *(data + i);
            }
        }
    }
    Array(initializer_list<int> list)
    {
        size = list.size();
        p = new int[size]; // new way instead of using malloc
        int i = 0;
        for (int value : list)
        {
            p[i++] = value;
        }
    }
    ~Array()
    {
        free(p);
        p = nullptr;
    }
    int getData(int index)
    {
        return *(p + index);
    }
};

int main()
{
    Array dataArra({1, 5, 6, 37, 8});
    cout << dataArra.getData(2) << endl;

    return 0;
}