// Link:-https://www.codechef.com/problems/CCISLAND
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;

    cin >> t;

    while (t--)
    {
        int X = 0, X1 = 0, Y = 0, Y1 = 0, D = 0;

        cin >> X >> Y >> X1 >> Y1 >> D;

        int req_food = X1 * D;
        int req_water = Y1 * D;

        if (X >= req_food && Y >= req_water)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
