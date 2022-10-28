/*
0 to 35     Fail
35 to 50    Pass class 
50 to 60    Second class
60 to 70    First class 
70 to 100   First class with distinct
*/

#include<iostream>
using namespace std;

void DisplayClass(float fMarks)
{
   if((fMarks >= 0.0) && (fMarks < 35.0))
   {
       cout<<"You are Fail\n";
   }
   else if((fMarks >= 35.0) && (fMarks < 50.0))
   {
       cout<<"Pass Class\n";
   }
   else if((fMarks >= 50.0) && (fMarks < 60.0))
   {
       cout<<"Second Class\n";
   }
   else if((fMarks >= 60.0) && (fMarks < 70.0))
   {
       cout<<"First Class\n";
   }
   else if((fMarks >= 70.0) && (fMarks < 100.0))
   {
       cout<<"First Class wih Distinction\n";
   }
   else
   {
       cout<<"Invalid Marks\n";
   } 
}

int main()
{
    float fValue = 0.0;

    cout<<"Enter the percentage\n";
    cin>>fValue;

    DisplayClass(fValue);

    return 0;
}