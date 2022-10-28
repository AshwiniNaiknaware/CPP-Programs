//program to display 1 to 5 on Screen
//output  1 2 3 4 5

#include<iostream>
using namespace std;

void Display(int iNo)
{
   int iCnt = 0;

    if(iNo < 0 )
    {
        iNo = -iNo;
    }
    
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
       cout<<iCnt<<"\n";
   }

}

int main()
{
    int iValue = 0;

    cout<<"Enter the number\n";
    cin>>iValue;

    Display(iValue);

    return 0;
}