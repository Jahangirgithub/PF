#include <iostream>
using namespace std;
int main()
{
    /*Write a program that declares an integer variable day and initializes it to zero. It the promts the user to enter the day value (1 through 30). The program then displays the day value entered by the user as shown below.


For example, if the user entered 27, then the following is displayed

The day is 27.
*/
    int days = 0;
    cout << "Enter the days bt(1 through 30) : ";
    cin >> days;
    cout << "Tha day is " << days << endl;
    return 0;
}