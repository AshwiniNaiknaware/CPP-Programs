#include<iostream>
using namespace std;

///////////////////////////////////////
//
//Fuction Name:     Addition
//Discription:      Used to Perform addition of 2 numbers 
//Input:            Interger 
//Output:           Integer
//Date:             28/05/2022
//Author:           Ashwini Prakash Naiknaware 
//
///////////////////////////////////////

int Addition(int iValue1, int iValue2)   //dukan 
{
    int iAns = 0;
    iAns = iValue1+ iValue2;
    return iAns;    
}

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