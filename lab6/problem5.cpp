#include <iostream>
using namespace std;
int print_reverse(int number)
{
    int mod{}, counter{},reverse{};
    while (number != 0)
    {
        mod = number % 10;
        reverse=reverse*10+mod;        
        number /= 10;
        counter += 1;
    }
    while(reverse!=0)
    {
        int mod1=reverse%10;
        cout<<mod1<<' ';
        reverse/=10;
    }
    cout<<endl;
    return counter;
}
int main()
{
    int number{},counter{};
    cout << "Enter the positive integers that is greater than one : ";
    cin >> number;
    counter = print_reverse(number);
    cout << "The count of number is : " << counter << endl;
    return 0;
}