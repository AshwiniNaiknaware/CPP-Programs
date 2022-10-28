//Forward and Backward Display of numbers 

#include<iostream>
using namespace std;

void DisplayF(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt<<" ";
    }
}

void DisplayB(int iNo)
{
    int iCnt = 0;

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        cout<<iCnt<<" ";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number\n";
    cin>>iValue;

    cout<<"Forward Display\n";
    DisplayF(iValue);

    cout<<"\nBackward Display\n";
    DisplayB(iValue);

    return 0;
}