#include <iostream>
using namespace std;
void printMessage()
{
    cout << "Programming Fundamentals Lab. " << endl;
}
void printCharacters(char ch)
{
    cout << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << ch << endl;
}
int main()
{
    char aChar{'+'};
    printCharacters(aChar);
    printCharacters(aChar);
    printMessage();
    printMessage();
    printCharacters('=');
    printCharacters('=');
    return 0;
}
