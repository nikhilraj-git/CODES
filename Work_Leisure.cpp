#include <iostream>
using namespace std;
int main()
{
    int hour;
    cout << "Enter time in 24 hour clock";
    cin >> hour;
    if (hour >= 9 && hour <= 18)
    {
        cout << "Working";
    }
    else
        cout
            << "leisure";
    return 0;
}
