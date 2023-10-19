#include <iostream>
using namespace std;
int highestNumber(int aNum, int bNum) {
	int highest{};

if (aNum > bNum) {
		highest = aNum;
	}
else {
		highest = bNum;
	}	
return highest;
}

int main(){
     	int num1{}, num2{};

cout << " Please enter two integers: ";
	cin >> num1 >> num2;

	cout << "The highest of " << num1 << " and " << num2 << " is " 
<< highestNumber(num1, num2) << endl;
return 0;
}


