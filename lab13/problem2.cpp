/*
Write a program that declares and defines a one dimensional dynamic array of integers A of size as mentioned by the user during input. Then declare a dynamic array of pointers B of the same size as A. Make the cells of array B point to the respective cells of array A. That is, B[0] points to the memory location represented by A[0], B[1] points at A[1] and so on. 
*/



#include<iostream>
using namespace std;
int main()
{
    // Making one dynamic array with the help of pointers:
    int size{};
    cout<<"Enter the size of array:";
    cin>>size;
    int *A=new int[size];
    // And making another dynamic memory that point Poniter A And having Same size:
    int* *B=new int* [size];
    for(int i=0;i<size;i+=1)
    {
       B[i]=&A[i];
    } 
    return 0;
}