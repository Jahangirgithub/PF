/*Write a program that prompts the user to enter as many characters as he/she wishes and terminate it with with z or Z. The program counts and displays the number of vowels (a, e, i, o, u) entered by the user. The user may enter alpha character in either lower case or upper case.

	Example:
	The user enters:   12’;[].,a, b3 4Iu78 A E: 12~ O o 0A0” } ull U 12ybusjhwe
	The program output is as follows:
		Count of a’s:    3
		Count of e’s:    2
		Count of i’s:     1
		Count of o’s:    2
		Count of u’s:    3	*/

#include <iostream>
using namespace std;
int main()
{
	char alpha{};
	int count_a{}, count_e{}, count_i{}, count_o{}, count_u{};
	cout << "Enter the charcter and terminate the programm on z and Z: ";
	cin >> alpha;
	while (true)
	{
		if ((alpha == 'z') || (alpha == 'Z'))
		{
			break;
		}
		else
		{
			if ((alpha == 'A') || (alpha == 'a'))
			{
				count_a += 1;
			}
			else if ((alpha == 'E') || (alpha == 'e'))
			{
				count_e += 1;
			}
			else if ((alpha == 'i') || (alpha == 'I'))
			{
				count_i += 1;
			}
			else if ((alpha == 'O') || (alpha == 'o'))
			{
				count_o += 1;
			}
			else if ((alpha == 'U') || (alpha == 'u'))
			{
				count_u += 1;
			}
		}
		cin >> alpha;
	}
	cout << "Count of a: " << count_a << endl;
	cout << "Count of e: " << count_e << endl;
	cout << "Count of i: " << count_i << endl;
	cout << "Count of o: " << count_o << endl;
	cout << "Count of u: " << count_u << endl;
	return 0;
}