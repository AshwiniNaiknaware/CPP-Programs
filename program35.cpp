#include<iostream>
using namespace std;

bool ChkPerfect(int iNo)
{
   int iCnt = 0;
   int  iSum = 0;

    if(iNo < 0)  //updater
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=(iNo/2); iCnt++)   //Time Complexity reduced to O(N/2)
    {
        if((iNo % iCnt) == 0)
        {
              iSum = iSum + iCnt;
        }
        if(iSum > iNo)
        {
            break;
        }
    }
    
    if(iSum == iNo)
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

    cout<<"Enter number\n";
    cin>>iValue;

    bRet = ChkPerfect(iValue); //Calling ChkPerfeat function

    if(bRet == true)
    {
        cout<<iValue<<" is perfet number";
    }
    else 
    {
        cout<<iValue<<" is not perfect number";
    }

    return 0;
}