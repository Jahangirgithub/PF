/*Write a function printTable(…) that accepts two integer parameters and prints the five entries of the table, starting from the second parameter, on the output screen.

The main( ) function shall prompt the user for the table number and starting entry and then calls/invokes the printTable(…) function so that the asked for table is printed on the output screen.


For example, if the user entered 8 and 4, then the following is displayed

8 * 4 = 32
8 * 5 = 40
8 * 6 = 48
8 * 7 = 56
8 * 8 = 64
*/
#include <iostream>
using namespace std;
void printTable(int table, int end)
{
    cout << table << " * " << end << " = " << table * end << endl;
    end += 1;
    cout << table << " * " << end << " = " << table * end << endl;
    end += 1;
    cout << table << " * " << end << " = " << table * end << endl;
    end += 1;
    cout << table << " * " << end << " = " << table * end << endl;
    end += 1;
    cout << table << " * " << end << " = " << table * end << endl;
}
int main()
{
    int table{}, end{};
    cout << "Enter the number of table and end: ";
    cin >> table >> end;

    printTable(table, end);
    return 0;
}