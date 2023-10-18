/*Write a program that prompts the user to enter two integer numbers, stores them in two distinct variables and displays them in the same order.
Afterwards, the program moves the values of the two variable in such a manner that the first variable contains the value of the second variable which in turn contains the value of the first variable,
In other words, the values of the two variables are swapped.

For example, if the integers entered by the user are 12, 35, then the output is as follows:

Number1 = 12,	Number2 = 35
After Swapping
Number1 = 35,	Number2 = 12
*/
#include <iostream>
using namespace std;
int main()
{
    int num1{}, num2{};
    cout << "Enter the numbers: ";
    cin >> num1 >> num2;
    cout << "Number1 = " << num1 << ',' << "	"
         << "Number2 = " << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After Swapping" << endl;
    cout << "Number1 = " << num1 << ',' << "	"
         << "Number2 = " << num2 << endl;
    return 0;
}