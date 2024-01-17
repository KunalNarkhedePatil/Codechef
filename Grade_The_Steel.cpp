// Link:-https://www.codechef.com/problems/FLOW014
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int hard = 0;
    float carbon = 0.0;
    int tensile = 0;
    cin >> t;

    while (t--)
    {
        cin >> hard >> carbon >> tensile;

        if (hard > 50 && carbon < 0.7 && tensile > 5600)
        {
            cout << "10" << endl;
        }
        else if (hard > 50 && carbon < 0.7)
        {
            cout << "9" << endl;
        }
        else if (carbon < 0.7 && tensile > 5600)
        {
            cout << "8" << endl;
        }
        else if (hard > 50 && tensile > 5600)
        {
            cout << "7" << endl;
        }
        else if (hard > 50 || carbon < 0.7 || tensile > 5600)
        {
            cout << "6" << endl;
        }
        else
        {
            cout << "5" << endl;
        }
    }
}
