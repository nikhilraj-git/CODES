#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            cout << ">";
        else if (a < b)
            cout << ">";
        else if (a == b)
            cout << "=";
    }
    return 0;
}