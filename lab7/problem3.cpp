/*Write a program that declares an integer array of 10 elements. It then asks user to enter 10 numbers and stores them in the array. The program processes the array and displays the largest and the smallest numbers in the array.
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[10]{};
    for (int idx{}; idx < 10; idx += 1)
    {
        cin >> arr[idx];
    }
    cout << "After takin input from the user " << endl;
    int smallest=arr[0],largest=arr[0];
    for(int idx{};idx<10;idx+=1)
    {
        if(arr[idx]>largest)
        {
            largest=arr[idx];
        }
        else{
            if(arr[idx]<smallest)
            {
                smallest=arr[idx];
            }
        }
    }
    cout<<"The smallest number in the array :"<<smallest<<endl;
    cout<<"The largest number in the array :"<<largest<<endl;
   return 0;
}  