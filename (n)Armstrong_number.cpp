#include <iostream>
using namespace std;
int main()
{
    int num, originalNum, n = 0, result = 0, power, remainder;
    cout << "Enter a number : ";
    cin >> originalNum;
    originalNum = num;
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        power = round(pow(remainder, n));
        result += power;
        originalNum /= 10;
    }
    if (result == num)
        cout << num << " is a Armstrong number";
    else
        cout << num << " is not a Armstrong number ;
            return 0;
}
