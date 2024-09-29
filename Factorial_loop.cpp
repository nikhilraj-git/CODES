#include <iostream>
using namespace std;
int main()
{
    int n, i;
    long double factorial = 1.0;
    cout << "Enter a number :";
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        factorial *= i;
    }
    cout << "Factorial of a number : " << factorial;

    return 0;
}