// Define a class String with char pointer and length of the string as instance member
// variables. Define a method to dynamically create an array of char type and hold the
// input string in such a way that the array length is just enough to accommodate the
// input string.
// define methods to convert string into uppercase, lowercase.
// define methods to print string, return string, return length of string.

#include <iostream>
using namespace std;

class String
{
private:
    int length = 0;
    char *P = nullptr;

public:
    String() {}
    String(const char ch[])
    {
        int counter = 0;
        while (ch[counter] != 0)
        {
            counter++;
        }
        length = counter;
        P = new char[length + 1];
        for (int i = 0; i < length; i++)
        {
            *(P + i) = ch[i];
        }
        *(P + length) = '\0';
    }

    String(const String &copyStr)
    {
        length = copyStr.length;
        P = new char[length + 1];
        for (int i = 0; i < length; i++)
        {
            *(P + i) = *(copyStr.P + i);
        }
        *(P + length) = '\0';
    }

    String &operator=(const String &copyStr)
    {
        if (this == &copyStr) return *this;
        length = copyStr.length;
        if (P != nullptr)
        {
            delete[] P;
        }
        P = new char[length + 1];
        for (int i = 0; i < length; i++)
        {
            *(P + i) = *(copyStr.P + i);
        }
        *(P + length) = '\0';
        return *this;
    }

    String &operator=(const char copyStr[])
    {
        length = 0;
        while (copyStr[length] != 0)
        {
            length++;
        }
        if (P != nullptr)
        {
            delete[] P;
        }
        P = new char[length + 1];
        for (int i = 0; i < length; i++)
        {
            *(P + i) = copyStr[i];
        }
        *(P + length) = '\0';
        return *this;
    }

    String toUpperCase()
    {
        String temp;
        temp.length = length;
        temp.P = new char[temp.length + 1];
        for (int i = 0; i < length; i++)
        {
            if (*(P + i) >= 'a' && *(P + i) <= 'z')
            {
                *(temp.P + i) = *(P + i) - 32;
            }
            else
            {
                *(temp.P + i) = *(P + i);
            }
        }
        *(temp.P + temp.length) = '\0';
        return temp;
    }

    String toLowerCase()
    {
        String temp;
        temp.length = length;
        temp.P = new char[temp.length];
        for (int i = 0; i < length; i++)
        {
            if (*(P + i) >= 'A' && *(P + i) <= 'Z')
            {
                *(temp.P + i) = *(P + i) + 32;
            }
            else
            {
                *(temp.P + i) = *(P + i);
            }
        }
        *(temp.P + temp.length) = '\0';
        return temp;
    }

    int size()
    {
        return length;
    }

    ~String()
    {
        delete[] P;
    }

    friend ostream &operator<<(ostream &out, const String &str);
};

ostream &operator<<(ostream &out, const String &str)
{
    for (int i = 0; i < str.length; i++)
    {
        out << *(str.P + i);
    }
    return out;
}

int main()
{
    char ch[] = "This is a string";
    // String testString1(ch);
    String testString1;
    testString1 = ch;
    cout << testString1 << endl;
    String testString2 = "This is string 2";
    cout << testString2.toUpperCase() << endl;
    cout << testString2.toLowerCase() << endl;
    cout << testString1.size() << endl;
    return 0;
}
