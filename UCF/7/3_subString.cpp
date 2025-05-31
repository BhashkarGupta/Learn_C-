// Define a function to print a substring from startinde(inclusive) to
// endIndex(exclusive). Define function in such a way that if second argument is not
// provided, string will print till the last possible index.

#include <iostream>
#include <string>
using namespace std;

void PrintSubString(string str, int startIndex, int endIndex = -1)
{
    int stringLength = sizeof(str) / sizeof(str[0]);
    if (endIndex >= stringLength)
    {
        cout << "Index out of Bound";
    }
    else
    {
        if (endIndex == -1)
        {
            endIndex = stringLength;
        }
        for (int i = startIndex; i < endIndex; i++)
        {
            cout << str[i];
        }
        cout << endl;
    }
}

int main()
{
    string str = "This is a string";
    PrintSubString(str, 5);
    PrintSubString(str, 3, 10);
    return 0;
}