#include<iostream>
using namespace std;

bool ChkEven(int iNo)
{
    if(iNo % 2 == 0)
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

    cout<<"Enter the number\n";
    cin>>iValue;

    iRet = ChkEven(iValue);

    if (iRet == 1)
    {
        cout<<iValue<<" is Even Number\n";
    }
    else
    {
        cout<<iValue<<" is not even  numbern";
    }

    return 0;
}