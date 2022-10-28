//Accept two number from user and give result of second number as power of first number 
//Input: 2  3
//Output: 2^3 = (2*2*2)=8

#include<iostream>
using namespace std;

int Power(int iNo1, int iNo2)
{
    int iMult = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;
    }
    return iMult;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter the base number "<<endl;
    cin>>iValue1;

    cout<<"Enter the power number "<<endl;
    cin>>iValue2;

    iRet = Power(iValue1, iValue2);

    cout<<"Result is : "<<iRet;

    return 0;
}