#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d, r1, r2;
    cout << "Enter a, b and c to calculate discriminant";
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);
    cout << d;
    if (d == 0)
    {
        r1 = -b / (2 * a);
        cout << "Roots are real and equal" << r1;
    }

    else if (d > 0)
    {

        r1 = (-b + sqrtd / (2 * a));
        r2 = (-b - sqrtd / (2 * a));
        cout << "Roots are real but unequal" << r1 << r2;
    }
    else
        cout << "Roots are imaginary";

    return 0;
}