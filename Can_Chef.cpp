// Link:-https://www.codechef.com/problems/CANCHEF
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int X = 0, Y = 0;
    cin >> t;

    while (t--)
    {
        cin >> X >> Y;

        if (X * 15 >= Y * 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
