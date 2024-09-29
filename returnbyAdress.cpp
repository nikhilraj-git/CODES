#include <iostream>
using namespace std;
int *fun()
{
    int *p = new int[6];
    for (int i = 0; i < 6; i++)
    {
        p[i] = 6 * i;
    }
    cout << p << endl;
    return p;
}
int main()
{
    int *q = fun();
    cout << q << endl;
    for (int i = 0; i < 6; i++)
        cout << q[i] << endl;
}