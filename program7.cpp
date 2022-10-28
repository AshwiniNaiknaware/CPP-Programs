#include "header7.h"

///////////////////////////////////////
////write a program to addition of two numbers
//////////////////////////////////////

int main()           //Ghar 
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;

    cout<<"Enter first number\n";
    cin>>iNo1;

    cout<<"Enter second number\n";
    cin>>iNo2;

    iNo3 = Addition(iNo1, iNo2);

    cout<<"Addition is "<<iNo3;

    return 0;
}

///////////////////////////////////////
//
//Input:     11  10 
//Output:    21
//
///////////////////////////////////////