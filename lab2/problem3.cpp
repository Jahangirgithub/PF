/*Write a function printTable( ) that print first five entries of the table 7. The function shall be called from the main( ) function so that the following is displayed on the output screen.

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
    return 0;
}