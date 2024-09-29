#include <iostream>
using namespace std;
int main()
{
    int a, b, choice;
    cout << "Enter the values for a and b";
    cin >> a >> b;
    cout << " a - " << a << endl
         << " b - " << b << endl;
    cout << "Enter choice - ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Addition - " << a + b;
        break;
    case 2:
        cout << "Substraction - " << a - b;
        break;
    case 3:
        cout << "Multiplication - " << a * b;
        break;
    case 4:
        cout << "Division - " << a / b;
        break;
    default:
        cout << "Invalid choice ";
    }
    return 0;
}
