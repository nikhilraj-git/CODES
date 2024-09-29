#include <iostream>
using namespace std;
void display()
{
    cout << "Hello !!";
}
int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}
int main()
{
    int a = 2,
        b = 8, c;
    c = add(a, b);
    cout << "Sum is " << c << endl;

    display();
    return 0;
}