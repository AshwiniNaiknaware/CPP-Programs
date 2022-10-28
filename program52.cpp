#include<iostream>
using namespace std;

int SumEven(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2)== 0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter Number\n";
    cin>>iValue;
    
    iRet = SumEven(iValue);

    cout<<"Sum of Even digits are : "<<iRet<<endl;
    return 0;
}