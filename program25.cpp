//program to check if given number is Even or Odd

#include<iostream>
using namespace std;

bool Check(int iNo)
{
    if((iNo%2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number\n";
    cin>>iValue;

    iRet = Check(iValue);

    if(iRet == 1)
    {
        cout<<iValue<<" is Even Number";
    }
    else
    {
        cout<<iValue<<" is Not Even Number";
    }
    return 0;
}
