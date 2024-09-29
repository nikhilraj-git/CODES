#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, max, min;
        cin >> a >> b;
        if (a > b)
            min = a - b;
        else
            min = b - a;
        max = a + b;
        cout << min << " " << max << endl;
    }
    return 0;
}