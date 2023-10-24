/*Problem1:
Write a function that accepts  integers from the users until -99 is entered and returns the largest number entered by the user.

Example:
    If the integers entered by the users are:   2 -3 3 12 4 8 21 -12 -3 2 4 -99
The function returns 21

Write a program uses the function written in part a) above and displays the largest number entered by the user on the screen.

*/
#include <iostream>
using namespace std;
void print_largest(int number)
{
    int number1=number;
    while(number!=-99)
    {
        if(number>number1)
        {
          number1=number;
        }
        cin>>number;
    }
    cout<<"The greatest number is : "<<number1<<endl;
}
int main()
{

    int number{};
    cout<<"Enter the number :";
    cin>>number;
    print_largest(number);
    return 0;
}