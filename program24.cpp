//program to check if given number is divisible by 3 and 5 
#include<iostream>
using namespace std;

bool Check(int iNo)
{
    if(
      ((iNo % 3) == 0) && 
      ((iNo % 5) == 0)
      )
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
    int iRet = 0;

    cout<<"Enter the Number\n";
    cin>>iValue;

    iRet = Check(iValue);

    if(iRet == 1)
    {
        cout<<iValue<<" is Divisible by 3 and 5";
    }
    else
    {
        cout<<iValue<<" is Not Divisible by 3 and 5";
    }
    return 0;
}
