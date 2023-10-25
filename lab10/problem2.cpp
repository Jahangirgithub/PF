/*
a)Write a function that accepts a CString as a parameter and returns the count of consonants (non-vowels letters) in it.

Example:
CString:     		AbOjUeKliosEna
Function returns: 	6

(Note: 	Consonants are non-vowel letters i.e.  b, c, d, f, g, h, j …  and so on. The characters may be in upper or lower case.)
*/
#include <iostream>
using namespace std;
int print_counter(char *cstring)
{
    int counter{};
    for(int idx{};cstring[idx]!='\0';idx+=1)
    {
        if(!((cstring[idx]=='a')||(cstring[idx]=='A')||(cstring[idx]=='E')||(cstring[idx]=='e')||(cstring[idx]=='O')||(cstring[idx]=='o')||(cstring[idx]=='i')||(cstring[idx]=='I')||(cstring[idx]=='u')||(cstring[idx]=='U')))
        {
         counter+=1;
        }
    }
    return counter;
}
int main()
{ 
    char cstring[50]{"dsjkhcxshnfsdfcosnfvrfvioehgnhsskcdmfuotvnrehcmfh"};
    cout<<"The counting of non_vowels in This cstring : "<<print_counter(cstring)<<endl;
    
    return 0;
}