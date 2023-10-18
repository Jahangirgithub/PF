/*Write a function printTable(…) that accepts an integer parameter and prints the first five entries of the table on the output screen.

The main( ) function shall prompt the user for the table number to be printed and then calls/invokes the printTable(…) function so that the asked for table is printed on the output screen.


For example, if the user entered 9, then the following is displayed

9 * 1 = 9
9 * 2 = 18
9 * 3 = 27
9 * 4 = 36
9 * 5 = 45
*/
#include <iostream>
using namespace std;
void printTable(int table)
{
    cout <<table<<" * 1 = " << table * 1 << endl;
    cout <<table<<" * 2 = " << table * 2 << endl;
    cout <<table<<" * 3 = " << table * 3 << endl;
    cout <<table<<" * 4 = " << table * 4 << endl;
    cout <<table<<" * 5 = " << table * 5 << endl;

}
int main()
{
    int table{};
    cout<<"Enter the number of table: ";
    cin>>table;
    
     printTable(table);
    return 0;
}