#include <iostream>
using namespace std;
int main()
{
    int A[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, n = 8;
    int sum = 0;
    for (i = 0; i <= 8; i++)
    {

        sum = sum + A[i];
    }
    cout << "Sum is:" << sum;
    return 0;
}