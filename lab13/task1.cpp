/*Write and save the following program in task1.cpp file.



Compile the above program into task1.exe and then execute it using the following command:

	task1.exe    infile.txt    outFile.txt   123	456

Observe the output of the program and verify that the entire command line as shown above is printed by the program.
*/
#include <iostream>
using namespace std;

int main(int argc, char * argv[ ])
{
	for (int i=0; i < argc; i+=1)
{
		cout << argv[i] << endl;
	}
	return 0;
}
