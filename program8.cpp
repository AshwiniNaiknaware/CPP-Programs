#include<iostream>
using namespace std;

int Addition(int , int);     //Forward declaration

////////////////////////////////////////////////
////write a program to addition of two numbers
////////////////////////////////////////////////

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;

    cout<<"Enter first and second number\n";
    cin>>iNo1>> iNo2;

    iNo3 = Addition(iNo1, iNo2);

    cout<<"Addition is :"<<iNo3;

    return 0;
}

///////////////////////////////////////
//
//Input:     11  10 
//Output:    21
//
///////////////////////////////////////
