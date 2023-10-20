/*
Problem 4:

Write a program that asks the user to enter three numbers (integers) and displays them in ascending order (smallest to highest).

For Example:
User enters   15 27 2
Then the output is      2  15  27

*/
#include <iostream>
using namespace std;
int main()
{
    int num1{}, num2{}, num3{};
    cout << "Enter the three integers: ";
    cin >> num1 >> num2 >> num3;
    if ((num1 <= num2) && (num1 <= num3))
    {
        if (num2 <= num3)
        {
            cout << num1 << ' ' << num2 << ' ' << num3 << endl;
        }
        else
        {
            cout << num1 << ' ' << num3 << ' ' << num2 << endl;
        }
    }
    else if ((num2 <= num1) && (num2 <= num3))
    {
        if (num1 <= num3)
        {
            cout << num2 << ' ' << num1 << ' ' << num3 << endl;
        }
        else
        {
            cout << num2 << ' ' << num3 << ' ' << num1 << endl;
        }
    }
    else
    {
        if (num1 <= num2)
        {
            cout << num3 << ' ' << num1 << ' ' << num2 << endl;
        }
        else
        {
            cout << num3 << ' ' << num2 << ' ' << num1 << endl;
        }
    }
    return 0;
}