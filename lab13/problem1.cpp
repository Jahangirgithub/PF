/*Write a function that prints the following pattern using at least two nested loops.

     1   2 	3
     2   4 	6
     3   6 	9
    *********
    2	3   4
    4	6	8
    6	9	12
    *********
    3	4	5
    6	8	10
    9	12	15
    *********
*/
#include <iostream>
using namespace std;
int main()
{
    // First nested loop
    for (int i{1}; i <= 3; i += 1)
    {
        for (int j{1}; j <= 3; j += 1)
        {
            cout << j * i << ' ';
        }
        cout << endl;
    }
    cout << "*****" << endl;
    // Second nested loop
    for (int i{1}; i <= 3; i += 1)
    {
        for (int j{2}; j <= 4; j += 1)
        {
            cout << j * i << ' ';
        }
        cout << endl;
    }
    cout << "*****" << endl;

// Third  nested loop
    for (int i{1}; i <= 3; i += 1)
    {
        for (int j{3}; j <= 5; j += 1)
        {
            cout << j * i << ' ';
        }
        cout << endl;
    }
    cout << "*****" << endl;
    return 0;
}