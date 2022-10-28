//Program to count the of factors of Number 

#include<iostream>
using namespace std;

int CountFactor(int iNo)
{
    int iCnt = 0;
    int iFactCnt = 0;

    for(iCnt = 1; iCnt<= (iNo/2); iCnt++)  //iCnt starts From 1
    {
        if(iNo % iCnt == 0)
        {
            iFactCnt++;
        }
    }
    return iFactCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number\n";
    cin>>iValue;

    iRet = CountFactor(iValue);

    cout<<"Count of Factors is "<<iRet;
    return 0;
}