#include<iostream>
using namespace std;

bool CheckArmstrong(int iNo)
{
    int iDigit = 0,iDigCnt = 0, iTemp = 0;
    int iCnt = 0, iSum = 0, iMult = 1;

    iTemp = iNo;   //storing value of iNo in temporary variable 

   //Calculating number of digits 
    while(iNo != 0)
    {
        iDigCnt++;
        iNo = iNo /10;
    }

    iNo = iTemp;

    while(iNo != 0)
    {
        iMult = 1;
        iDigit = iNo % 10;

        for(iCnt = 1; iCnt<= iDigCnt; iCnt++)
        {
            iMult = iMult * iDigit;
        }
        iSum = iSum + iMult;

        iNo = iNo /10;
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

int mian()
{
    int iValue = 0;
    bool bRet ;

    coutvvv 6tw]tv66c;; <<"Enter the number\n";
    cin>>iValue;

    bRet = CheckArmstrong(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is Armstrong number\n";
    }
    else 
    {
        cout<<iValue<<" is Not Armstrong number\n";
    }

    return 0;
}