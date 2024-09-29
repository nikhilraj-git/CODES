#include <iostream>
using namespace std;
int main()
{
    int A[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 7, max;
    max = A[0];
    for (int i = 0; i <= 8; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "Maximum number is : " << max;

    return 0;
}