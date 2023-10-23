/*Write a program that reads a text file provided by the user. This text file consists of a paragraph of text. You program shall read the file and do the following tasks.

a)Count the number of words that have two A or a in them and display the count.
b)Count statistics for all alphabets i.e. how many words starting with AA, BB, …, ZZ. 	Words may start from small letters as well, count both of them. At the end display 	count of all and sum total.
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()

{
    
    int counter{}, max_a{};
    char cstring[50]{};
    fstream fin;
    fin.open("./Dictionary.txt");
    if (fin.eof())
    {
        cout << "The file is  not openend" << endl;
    }
    while (fin >> cstring)
    {
        counter = 0;
        for (int idx{}; cstring[idx] != '\0'; idx + 1)
        {
            if ((cstring[idx] == 'a') || (cstring[idx] == 'A'))
            {
                counter += 1;
            }
        }
        if (counter >= 2)
        {
            max_a += 1;
            cout << cstring << ' ';
        }
    }
    cout << endl;
    cout << "The total number of words in which A and a are having:" << max_a << endl;
    return 0;
}