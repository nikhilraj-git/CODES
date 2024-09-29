#include <iostream>
using namespace std;
int num(int n)
{
    if (n < 4)
        return 0;
    return (n - 2) / 2 + num(n - 2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << num(n) << endl;
    }
    return 0;
}