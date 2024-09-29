#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a > 10)
            cout << "-1" << endl;
        else
            cout << "Thanks for helping chef!" << endl;
    }
    return 0;
}