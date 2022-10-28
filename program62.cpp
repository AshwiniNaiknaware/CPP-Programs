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

    cout<<"Enter elements of array\n";

    cin>>Arr[0];
    cin>>Arr[1];
    cin>>Arr[2];
    cin>>Arr[3];
    cin>>Arr[4];

    cout<<"Elements of array are\n";

    cout<<Arr[0]<<endl;
    cout<<Arr[1]<<endl;
    cout<<Arr[2]<<endl;
    cout<<Arr[3]<<endl;
    cout<<Arr[4]<<endl;

    return 0;
}