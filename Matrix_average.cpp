#include <iostream>
using namespace std;
int main()
{
    int n;
    float num[100], average, sum = 0.0;
    cout << "Enter the number of elements :-  5";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Enter number"
             << " - ";
        cin >> num[i];
        sum += num[i];
    }
    average = sum / n;
    cout << "Average is :" << average;
    return 0;
}