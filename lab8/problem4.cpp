/*
a)Write a program that declares a array of fifty (50) characters and initialize it with your full name. Then display the array on the screen.
// #include <iostream>
// using namespace std;
// int main()
// {
//     char cstring[50]{"Akbar Jahangir"};
//     cout<<"The output is :"<<cstring<<endl;
//     return 0;
// }

b)Write a program that declares a array of fifty (50) characters. It asks the user to enter any string of less than 50 characters and store it in the character array. Afterwards, the program displays the array on the screen.

*/
#include <iostream>
using namespace std;
int main()
{
    char cstring[50]{};
    for (int idx{}; idx < 50; idx++)
    {
        cin >> cstring[idx];
    }
    for (int idx{}; idx < 50; idx++)
    {
        cout << cstring[idx]<<' ';
    }
    return 0;
}
