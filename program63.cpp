////////////////////////
//
// Array problems 
//
////////////////////////

#include<iostream>
using namespace std;

int main()
{
    // Arr is one dimentional array
    // which contains 5 elements
    // and each element is of type int

    int Arr[5];
    register int iCnt = 0;

    cout<<"Enter the elements of array\n";

    for(iCnt=0; iCnt < 5; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Elements of array are\n";

    for(iCnt=0; iCnt < 5; iCnt++)
    {
        cout<<Arr[iCnt]<<endl ;
    }

    return 0;
}
