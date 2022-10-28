//Accept one number from user and display its factor.
//Input:10
//Output: 1 2 5 

//Input:9
//Output:1 3

//Input:17
//Output:1

//Input:20
//Output: 1 2 4 5 10

//Input:-20
//Output:1 2 4 5 10

#include<iostream>
using namespace std;

void DisplayFator(int iNo)
{
    int iCnt = 0;

    for(iCnt=1; iCnt<=iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            cout<<iCnt<<" ";
        }
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number\n";
    cin>>iValue;

    DisplayFator(iValue);

    return 0;
}

