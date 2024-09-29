#include <iostream>
#include <algorithm>
using namespace std;
void show(int a[], int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int asize = sizeof(a) / sizeof(a[0]);
        sort(a, a + asize);
        cout << a[0] + a[1];
        return 0;
    }
}