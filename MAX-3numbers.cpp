#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter all three numbers - ";
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << a;
    else
    {
        if (a < b && b > c)
            cout << b;
        else
            cout << c;
    }
    return 0;
}