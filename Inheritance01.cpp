#include <iostream>
using namespace std;
class example
{
    int a[2][2];

public:
    void input()
    {
        cout << "\nEnter array elements:";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        cout << "\nArray elements are:";
        for (int i = 0; i < 2; i++)
        {
            cout << "\n";
            for (int j = 0; j < 2; j++)
            {
                cout << a[i][j] << " ";
            }
        }
    }
};
int main()
{
    example obj[2];
    for (int i = 0; i < 2; i++)
    {
        obj[i].input();
        obj[i].display();
    }

    return 0;