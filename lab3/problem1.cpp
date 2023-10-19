/*Problem 1:

(a) Write a function that accepts two integer parameters and returns the smaller of the two parameters.
(b)Write a program that prompts the user for three integers and displays the smallest number on the screen using the function written in part a) above.

For Example
If the three numbers entered are  12 5 11, then the
Output is 5
*/
// Part (a)
// #include <iostream>
// using namespace std;
// int printsmallest(int num1, int num2)
// {
//     if (num1 < num2)
//     {
//         return num1;
//     }
//     else
//     {
//         return num2;
//     }
// }
// int main()
// {
//     int num1 = 8, num2 = 9, smallest = 0;
//     smallest=printsmallest(num1,num2);
//     cout<<"The smallest number is :"<<smallest<<endl;

//     return 0;
// }
/*
part(b)
*/
#include<iostream>
using namespace std;
int printsmallest(int num1,int num2,int num3)
{
    if((num1<=num2)&&(num1<=num3))
    {
        return num1;
    }
    else if((num2<=num1)&&(num2<=num3))
    {
        return num2;
    }
    else {
        return num3;
    }
}
int main()
{
    int num1{},num2{},num3{},smallest{};
    cout<<"Enter the three numbers :";
    cin>>num1>>num2>>num3;
    smallest=printsmallest(num1,num2,num3);
    cout<<"The smallest number is :"<<smallest<<endl;

return 0;
}