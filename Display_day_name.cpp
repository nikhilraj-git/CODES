#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number between 1 to 7";
    cin >> a;
    if (a == 1)
        cout << "1 - SUN";
    else if (a == 2)
        cout << "2 - MON";
    else if (a == 3)
        cout << "3 - TUE";
    else if (a == 4)
        cout << "4 - WED";
    else if (a == 5)
        cout << "5 - THU";
    else if (a == 6)
        cout << "6 - FRI";
    else
        cout << "7 - SAT";
    return 0;
}