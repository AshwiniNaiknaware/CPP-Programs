//check armstrong number 
//input : 153
//output : 1^3 +5^3 + 3^3 = 153

#include<iostream>
using namespace std;

int Power(int iNo1, int iNo2)
{
    int iMult = 1;
    register int iCnt = 0;

    for(iCnt=1; iCnt<=iNo2; iCnt++)
    {
        iMult = iMult * iNo1;
    }
    return iMult;
}

bool CheckarmStrong(int iNo)
{
    int iTemp = 0;
    int iDigCnt = 0, iDigit = 0, iSum = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;

    // Calculate number of digits

    while(iNo != 0)
    {
        iDigCnt++;
        iNo = iNo /10;
    }

    iNo = iTemp;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + Power(iDigit, iDigCnt); //function call 
        iNo = iNo / 10;
    }

    if(iSum == iTemp)
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

    cout<<"Enter the number\n";
    cin>>iValue; 

    bRet = CheckarmStrong(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is Armstrong number\n";
    }
    else
    {
        cout<<iValue<<" is not Armstrong number\n";
    }

    return 0;
}