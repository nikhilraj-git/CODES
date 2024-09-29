#include <iostream>
using namespace std;
int main()
{
    int m1, m2, m3, m4, m5, Avg;
    cout << "Enter the marks ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    Avg = (m1 + m2 + m3 + m4 + m5) / (5);
    cout << Avg << endl;
    if (Avg >= 60)
        cout << "Grade A";
    else if (Avg >= 35 && Avg < 60)
    {
        cout << "Grade B";
    }
    else
        cout << "Grade C";

    return 0;
}