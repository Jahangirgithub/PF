// #include<iostream>
// using namespace std;
// int Fraction_Addition(int x1,int y1,int x2,int y2,int &num2)
// {
//     int Fraction_result=(x1*y2)+(x2*y1);
//     num2=y1*y2;
//     return Fraction_result;
// }
// int main()
// {
//     int x1{2},y1{4},x2{3},y2{7};
//     int num2{};
//     cout<<Fraction_Addition(x1,y1,x2,y2,num2)<<'/'<<num2;
// }
#include <iostream>
using namespace std;
struct Fraction
{
    int numerator{};
    int denomerator{};
};
Fraction Addition(const Fraction &f1, const Fraction &f2, char symbol)
{
    Fraction result{};
    if (symbol == '+')
    {
        result.denomerator = f1.denomerator * f2.denomerator;
        result.numerator = (f1.numerator * f2.denomerator) + (f2.numerator * f1.denomerator);
        return result;
    }
    else 
    {
        result.denomerator = f1.denomerator * f2.denomerator;
        result.numerator = (f1.numerator * f2.denomerator) - (f2.numerator * f1.denomerator);
        return result;
    }
}
void print_Fraction(const Fraction &result)
{
    cout << result.numerator << '/' << result.denomerator << endl;
}

int main()
{
    // making user defined data type
    // Also called hetrogenouos data type

    Fraction f1{}, f2{}, result{};
    char Sign{};

    cout << "Enter the Fraction For f1 and F2 :";
    cin >> f1.numerator;
    cout << '/';
    cin >> f1.denomerator >> Sign >> f2.numerator;
    cout << '/';
    cin >> f2.denomerator;
    result = Addition(f1, f2, Sign);
    cout << f1.numerator << '/' << f1.denomerator << Sign << f2.numerator << '/' << f2.denomerator << '=';
    print_Fraction(result);
    return 0;
}