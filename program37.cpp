#include<iostream>
using namespace std;

bool ChkPerfect(int iNo)
{
   int iCnt = 0;
   int iSum = 0;

   if(iNo < 0)
   {
       iNo = -iNo;
   } 

   for(iCnt=(iNo/2); ((iCnt >= 1) && (iSum <= iNo)); iCnt--) // TIme Complexity = O(N/2);
   {
       if((iNo % iCnt) == 0)
       {
           iSum = iSum + iCnt;
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
    bool bRet = false;

    cout<<"Enter number\n";
    cin>>iValue;

    bRet = ChkPerfect(iValue);  // Calling ChkPerfect

    if(bRet == true)
    {
        cout<<iValue<<" is Perfect number\n";
    }
    else
    {
        cout<<iValue<<" is Not perfect number\n";
    }

    return 0;
}