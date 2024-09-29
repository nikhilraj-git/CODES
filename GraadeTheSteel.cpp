#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float Hardness, Tensile_strength, Grade;
        float carbon_content;
        cin >> Hardness >> carbon_content >> Tensile_strength;
        if (Hardness > 50 && carbon_content < 0.7 && Tensile_strength > 5600)
            Grade = 10;

        else if (Hardness > 50 && carbon_content < 0.7)
            Grade = 9;

        else if (carbon_content < 0.7 && Tensile_strength > 5600)
            Grade = 8;

        else if (Hardness > 50 && Tensile_strength > 5600)
            Grade = 7;

        else if (Hardness > 50 || carbon_content < 0.7 || Tensile_strength > 5600)
            Grade = 6;

        else
            Grade = 5;
        cout << Grade << endl;
    }
    return 0;
}