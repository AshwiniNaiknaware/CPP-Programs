//program to display Hello 5 times on screen 
#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        cout<<"Please enter positive value\n";
        return ;
    }

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        cout<<"Hello\n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number\n";
    cin>>iValue;

    Display(iValue);

    return 0;
}