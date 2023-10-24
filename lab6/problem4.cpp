/*Write a function that accepts an integer parameter and returns the count of its digits.

Example:
    If the parameter is 12438
The function returns 5

Write a program that ask user for an integer positive number and displays the count of its digits.
*/
#include <iostream>
using namespace std;
int print_reverse(int number)
{
    int mod{}, counter{};
    while (number != 0)
    {
        mod = number % 10;
        cout << mod << ' ';
        number /= 10;
        counter += 1;
    }
    cout<<endl;
    return counter;
}
int main()
{
    int number{},counter{};
    cout << "Enter the positive integers that is greater than one : ";
    cin >> number;
    counter = print_reverse(number);
    cout << "The count of number is : " << counter << endl;
    return 0;
}