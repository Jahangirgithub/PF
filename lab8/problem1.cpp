/*
a)Write a function that accepts an array of integers and a ‘Key’ and returns the index of the first occurrence of the ‘Key’ in the array. If the ‘Key’ is not present in the array, the function returns -1.

Example 1:
Array:   2 -2 3 8 5 18 4 9 8 1
Key:   	8
The function returns: 3

Example 2:
Array:   2 -2 3 8 5 18 4 9 8 1
Key:   	7
The function returns:  -1

b)Write a program that declares an array of integer and populates it from the user data. It then calls the function written in part a) above and displays the result on the screen.
*/
#include <iostream>
using namespace std;
int print_index(int *arr, int elements, int keys)
{
    int index{-1};
    for (int idx{}; idx < elements; idx += 1)
    {
        if (keys == arr[idx])
        {
            index = idx;
            break;
        }
    }
    return index;
}
int main()
{
    int arr[10]{2, 3, 4, 5, 6, 7, 8, 8, 8, 8};
    int key = 8;
    cout << "The return index is :" << print_index(arr, 10, key);

    return 0;
}