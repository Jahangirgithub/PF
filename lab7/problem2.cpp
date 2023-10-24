/*
Write a program that declares an integer array of 10 elements. It then asks user to enter 10 numbers and stores them in the array. The program then displays the numbers in the reverse order i.e. the number entered last is displayed first and the number entered first is displayed at the end.
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[10]{};
    for (int idx{}; idx < 10; idx += 1)
    {
        cin >> arr[idx];
    }
    cout << "After takin input from the user " << endl;
    for (int idx{10 - 1}; idx >= 0; idx -= 1)
    {
        cout << arr[idx] << ' ';
    }
    return 0;
}