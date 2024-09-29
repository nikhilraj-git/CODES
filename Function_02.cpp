#include <iostream>
using namespace std;
int max(int x, int y, int z)
{
    if (x > y && x > z)
        return x;
    else if (y > x)
        return y;
    else
        return z;
}
int main()
{
    int a, b, c, maximum;
    cout << "Enter the three numbers" << endl;
    cin >> a >> b >> c;
    maximum = max(a, b, c);
    cout << endl
         << maximum;
}