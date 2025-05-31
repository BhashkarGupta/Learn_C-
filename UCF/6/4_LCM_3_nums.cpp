// Define a function to calculate LCM of three numbers.
#include<iostream>
using namespace std;

int LCM(int num1, int num2, int num3){
    int LCM = 1, divider = 2;
    while (divider<=num1 && divider<=num2 && divider<=num3)
    {
        if (num1%divider == 0 && num2%divider == 0 && num3%divider == 0)
        {
            num1 /= divider;
            num2 /= divider;
            num3 /= divider;
            LCM *= divider;
            divider = 2;
        }else{
            divider += 1;
        }
    }
    LCM *= num1 * num2 * num3;
    return LCM;
}

int main(){
    cout << "Enter 3 numbers : ";
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    cout << "LCM of these numbers is : " << LCM(num1, num2, num3) << endl;
    return 0;
}