/*Q1:
a)Write a program that takes two characters from the user and displays them as smaller to larger.
b)Modify the program written in part a) above so that it not only prints the character but also their ASCII decimal values also.

Example:
        If user enters ‘c’ and ‘a’
The program displays  ‘a’, ‘c’
The program displays ‘a’:97,  ‘c’:99
*/
#include <iostream>
using namespace std;
int main()
{
        char char1{}, char2{};
        cout << "Enter the two character: ";
        cin >> char1 >> char2;
        if (char1 < char2)
        {
                // cout << "The smallest character is :" << char1 << endl;
                // First method to convert character int integers:
                //  cout<<char1<<':'<<char1+0<<endl;
                // Second method is that
                cout<<char1<<':'<<static_cast<int>(char1)<<endl;
        }
        else
        {
                // cout << "The smallest character is :" << char2 << endl;
                 cout<<char2<<':'<<char2+0<<endl;
        }
        return 0;
}