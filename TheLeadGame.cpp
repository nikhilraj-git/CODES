#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sum1 = 0, sum2 = 0, lead = 0, winner, diff = 0;
    for (int i = 0; i < t; i++)
    {
        int s1, s2;
        cin >> s1 >> s2;
        sum1 = sum1 + s1;
        sum2 = sum2 + s2;
        if (sum1 > sum2)
        {
            diff = sum1 - sum2;
            if (diff > lead)
            {
                lead = diff;
                winner = 1;
            }
        }
        else
        {
            diff = sum2 - sum1;
            lead = diff;
            winner = 2;
        }
    }
    cout << winner << " " << lead;
    return 0;
}
