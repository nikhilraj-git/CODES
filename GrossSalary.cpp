#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float baseSalary;
        float grossSalary;
        cin >> baseSalary;
        if (baseSalary < 1500)
        {
            grossSalary = baseSalary + 0.1 * baseSalary + 0.9 * baseSalary;
        }
        else
        {
            grossSalary = 500 + baseSalary + 0.98 * baseSalary;
        }
        cout << setprecision(2) << fixed << grossSalary << endl;
    }
    return 0;
}
