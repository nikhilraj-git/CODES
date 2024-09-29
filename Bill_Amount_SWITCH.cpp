#include <iostream>
using namespace std;
int main()
{
    float billAmount;
    float discount = 0.0;
    cout << "Enter the bill amount :";
    cin >> billAmount;
    if (billAmount < 100)
        cout << "no discout";
    else if (billAmount >= 100 && billAmount <= 500)
    {
        discount = (10 * billAmount) / 100;
    }
    else
        discount = (20 * billAmount) / 100;
    cout << "Intial Bill = " << billAmount << endl;
    cout << "Discount = " << discount << endl;
    cout << "Bill = " << billAmount + discount << endl;
    return 0;
}