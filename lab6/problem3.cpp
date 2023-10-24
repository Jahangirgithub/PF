/*Write a function that accepts an integer parameter and prints/displays its digits in reverse order. You may assume that the parameter is a positive integer.

Example:
	If the parameter is 24567
The output is 7 6 5 4 2

Write a program that ask user for a positive integer and displays its digits in reverse using the function developed in part a) above.

*/
#include <iostream>
using namespace std;
void print_reverse(int number)
{
     int mod{};
    while(number!=0)
    {
        mod=number%10;
        cout<<mod<<' ';
        number/=10;
    }
}
int main()
{
    int number{};
    cout<<"Enter the positive integers that is greater than one : ";
    cin>>number;
    print_reverse(number);
    return 0;
}