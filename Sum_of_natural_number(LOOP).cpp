#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "Enter a natural number : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of n natural number is " << sum << endl;
    return 0;
}