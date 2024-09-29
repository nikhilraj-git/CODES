#include <iostream>
using namespace std;
int mian()
{
    int n, i = 1, sum = 0;
    cout << "Enter a natural number n :";
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
    }
    cout << "Sum of n natural numbers : " << sum << endl;
    return 0;
}