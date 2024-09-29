#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << " Enter a number";
    cin >> n;
    for (i = 1; i <= 20; i++)
    {
        cout << "i"
             << " * "
             << "n"
             << " = " << i * n << endl;
    }
    return 0;
}