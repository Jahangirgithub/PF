/*Write a function that prints the following pattern on the screen. You can use a cout statement that prints only one * on the screen.

	*
	**
	***
	****
	*****
	******

Modify the above function such that it accepts a single integer parameter and prints a pattern similar to the one shown in the part a). The pattern shall have the height equal to value in the function parameter.
  
For example, if function parameter contains 9, then the pattern has a height of nine 
lines ---line one  has a single asterisk, line 2 has two asterisks and so on.

*/
#include<iostream>
using namespace std;
int main()
{

	int number{};
	cout<<"Enter the number of stars: ";
	cin>>number;
	for(int i{};i<number;i+=1)
	{
		for(int j{};j<=i;j+=1)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}