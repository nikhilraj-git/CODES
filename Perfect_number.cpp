#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "Factors are -" << endl
                 << i << endl;

            sum = sum + i;
        }
    }
    cout << "Sum of the factors are : " << sum << endl;
    if (2 * n == sum)
        cout << "n is a perfect number .";
    else
        cout << "n is not a perfect number .";

    return 0;
}