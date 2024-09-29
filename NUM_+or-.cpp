#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number";
    cin >> a;
    if (a >= 0)
        cout << "Number is positive";
    else
        cout << "Number is negative";
    return 0;
}