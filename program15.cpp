//program to display 5 times Hello on screen

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        cout<<"Hello"<<endl;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number"<<endl;
    cin>>iValue;

    Display(iValue);

    return 0;
}