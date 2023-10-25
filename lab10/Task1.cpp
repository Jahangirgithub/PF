
// Type in the following program and observe the output displayed on screen.

#include <iostream>
using namespace std;


void printAddress(int ptr[ ], int elements)
{
	cout <<" From inside printAddress( … ) function" << endl;
cout <<"ptr =" << ptr << endl;
cout <<"&ptr[0] =" << &ptr[0] << endl;
}

int main()
{
	int aVar{}, bVar{}, cVar{};
	float aFloat{}, bFloat{}, cFloat{};

	int arr[5] {1, 2, 3, 4, 5};

	cout <<"Address of first element of array 'arr' =" << &arr[0] << endl << endl;

	cout <<"Address of  aVar =" << &aVar << endl;
	cout <<"Address of  bVar =" << &bVar << endl;
	cout <<"Address of  cVar =" << &cVar << endl;
	cout <<"Address of  aFloat =" << &aFloat << endl;
	cout <<"Address of  bFloat =" << &bFloat << endl;
	cout <<"Address of cFloat =" << &cFloat << endl;
	cout << endl;

	printAddress(arr, 5);

	return 0;
}
