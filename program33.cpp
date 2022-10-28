// perfect number is number hoes factors sum is equal to the number itself
 
#include<iostream>
using namespace std;

int SumFactors(int iNo)
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
    }
    return iSum;
}

bool ChkPerfect(int iNo)
{
   int iAns = 0;

    iAns = SumFactors(iNo);   //calling Sumfactor function
    
    if(iAns == iNo)
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
        cout<<"is perfet number\n"<<iValue;
    }
    else 
    {
        cout<<"is not perfect number\n"<<iValue;
    }

    return 0;
}