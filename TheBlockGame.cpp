#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, reverseNumber = 0;
        cin >> n;
        int b = n;
        while (b > 0)
        {
            int remainder = b % 10;
            reverseNumber = reverseNumber * 10 + remainder;
            b /= 10;
        }

        if (reverseNumber == n)

            cout << "wins" << endl;

        else

            cout << "loses" << endl;
    }
    return 0;
}