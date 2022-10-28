//Input :4
//Output: 10 (1+2+3+4)

//Input:5
//Output:15

#include<iostream>
using namespace std;

int Summation(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;

    cout<<"Enter Number\n";
    cin>>iValue;

    iRet = Summation(iValue);

    cout<<"Summation is :"<<iRet;

    return 0;
}