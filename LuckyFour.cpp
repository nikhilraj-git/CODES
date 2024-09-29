#include <iostream>
using namespace std;
int fourContaining(int a)
{
    int count = 0;
    while (a != 0)
    {
        int n = a % 10;
        a = a / 10;
        if (n == 4)
            count++;
    }
    return count;
}
int main()
{
    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        cout << fourContaining(a) << endl;
    }
    return 0;
}