// problems on Digits(Display Digits in reverse order from entered number)

#include <iostream>
using namespace std;

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        cout << iDigit << "\n"; // Display of digits
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter Number\n";
    cin >> iValue;

    DisplayDigits(iValue);

    return 0;
}