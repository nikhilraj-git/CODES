#include <iostream>
using namespace std;
int main()
{

    int x, y;
    cout << "Enter the number : ";
    cin >> x;
    for (y = 1; y <= 25; y++)
    {
        cout << " x "
             << " * "
             << " y "
             << " = " << x * y << endl;
    }
    return 0;
}
