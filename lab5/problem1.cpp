/*Problem1:
Write a program that counts and displays the even and odd numbers. The program prompts the user to enter positive integers and terminate the process by entering -90.

	Example:
	The user enters:  4 15 1 8 10 6 -90
	The program output is as follows:
		Count of Positive Even numbers: 4
		Count of Positive Odd numbers:  2

*/
#include <iostream>
using namespace std;
int main()
{
	int number{}, even_counter{}, odd_counter{};
	cout << "Enter the positive integers : ";
	cin >> number;
	while (number != -90)
	{
		if (number > 0)
		{
			if (number % 2 == 0)
			{
				even_counter += 1;
			}
			else
			{
				odd_counter += 1;
			}
		}
		cin >> number;
	}
	cout << "Count of Positive Even numbers: " << even_counter << endl;
	cout << "Count of Positive Odd numbers:  " << odd_counter << endl;
	return 0;
}