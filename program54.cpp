#include<iostream>
using namespace std;

bool checkpallindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo/10;
    }

    iNo = iTemp;

    if(iRev == iNo)
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
    bool bRet ;

    cout<<"Enter the number"<<endl;
    cin>>iValue;

    bRet = checkpallindrome(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" Pallindrome number ";
    }
    else
    {
        cout<<iValue<<" Not pallindrome number ";
    }
    return 0;
}