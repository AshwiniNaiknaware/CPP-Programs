#include<iostream>
using namespace std;

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }

   return iRev;
}

int main()  
{
    int iValue = 0; 
    int iRet = 0;

    cout<<"Enter number\n";  //2657
    cin>>iValue;

    iRet = Reverse(iValue);  // Reverse(7562)

    cout<<"Reverce number is :"<<iRet<<endl;

    return 0;  
}