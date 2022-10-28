//Accept number from user and return addition of its factor

#include<iostream>
using namespace std;

int SumFator(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<iNo; iCnt++)  //Time Complexity can not be reduced 
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number\n";
    cin>>iValue;

    iRet = SumFator(iValue);

    cout<<"Summation of Factors is "<<iRet;

    return 0;
}