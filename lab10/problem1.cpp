/*Write a function that accepts a CString as a parameter and returns the count of vowels (‘a’, ‘e’, ‘I’, ‘o’, ‘u’) in it.

Example:
CString:     		abojU;>!@#ekli~O@sEnA
Function returns: 	8

(Note: The characters may be in upper or  lower case characters.)

*/
#include <iostream>
using namespace std;
int print_counter(char *cstring)
{
    int counter{};
    for(int idx{};cstring[idx]!='\0';idx+=1)
    {
        if((cstring[idx]=='a')||(cstring[idx]=='A')||(cstring[idx]=='E')||(cstring[idx]=='e')||(cstring[idx]=='O')||(cstring[idx]=='o')||(cstring[idx]=='i')||(cstring[idx]=='I')||(cstring[idx]=='u')||(cstring[idx]=='U'))
        {
         counter+=1;
        }
    }
    return counter;
}
int main()
{ 
    char cstring[50]{"dsjkhcxshnfsdfcosnfvrfvioehgnhs;kcdmfuotvnrehcmfh"};
    cout<<"The counting of vowels in This cstring : "<<print_counter(cstring)<<endl;
    
    return 0;
}