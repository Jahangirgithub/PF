#include<iostream>
using namespace std;
// user defined data type
struct Fraction
{
    int numerator{};
    int denomerator{};
};
int main()
{
 Fraction f1{1},f2{8,9};
 cout<<f1.denomerator;
 return 0;
}