#include <iostream>
using namespace std;
int min(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int min(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}
float min(float a, float b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    cout << min(5, 8) << endl;
    cout << min(5, 4, 7) << endl;
    cout << min(45.2f, 26.2f) << endl;
    return 0;
}