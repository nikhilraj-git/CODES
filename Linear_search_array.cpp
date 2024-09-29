#include <iostream>
using namespace std;
int main()
{
    int A[10];
    int n = 10;
    cout << "Enter the number :";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter key ";
    int key;
    cin >> key;
    for (int i = 0; i <= 10; i++)
    {
        if (key == A[i])
        {
            cout << "Found at :" << i;
            return 0;
        }
    }
    return 0;
}