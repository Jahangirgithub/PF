/*Write a function that accepts an integer parameter and prints/displays its digits in reverse order. You may assume that the parameter is a 4-digit positive integer.

Example:
    If the parameter is 1243
The output is 3 4 2 1
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
    int number = 1243;
    print_reverse(number);
    return 0;
}