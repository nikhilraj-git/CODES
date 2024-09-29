#include <iostream>
using namespace std;
int main()
{
    int n, remainder, reverseNumber;
    cout << "Enter a number :";
    cin >> n;
    while (n != 0)
    {
        remainder = n % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        n /= 10;
    }
    cout << "Reversed Number = " << reverseNumber;
    return 0;
}