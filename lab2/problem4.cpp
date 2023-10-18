/*Write a program that uses the function printTable( ) written in Problem 1 above and displays the following on the output screen.
(Note: The function printTable ( ) shall not be changed in this problem.)
 
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35

7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35

*/
#include <iostream>
using namespace std;
void printTable()
{
    cout << "7 * 1 = " << 7 * 1 << endl;
    cout << "7 * 2 = " << 7 * 2 << endl;
    cout << "7 * 3 = " << 7 * 3 << endl;
    cout << "7 * 4 = " << 7 * 4 << endl;
    cout << "7 * 5 = " << 7 * 5 << endl;

}
int main()
{
    
     printTable();
     cout<<endl;
     printTable();
    return 0;
}