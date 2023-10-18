/*Write a program that whose output is as shown below.

****************************
Hello Programming Fundamentals
Hello Programming Fundamentals
****************************

You program must comprise two function printHello( ) and printAsterisks( ) which are called/invoked from the main( ).

Function printHello( ) prints a single line of “Hello Programming Fundamentals”.
Function printAsterisks( ) prints a single line of asterisks “********************”
*/
#include <iostream>
using namespace std;
void printHello()
{
    cout << "Hello Programming Fundamentals" << endl;
}
void printAsterisks()
{
    cout << "******************************" << endl;
}
int main()
{
    printAsterisks();
    printHello();
    printHello();
    printAsterisks();

    return 0;
}