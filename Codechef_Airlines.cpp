// Link:-https://www.codechef.com/problems/AIRLINES
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int X = 0, Y = 0, Z = 0;
    cin >> t;

    while (t--)
    {
        cin >> X >> Y >> Z;

        if (X * 10 > Y)
        {
            cout << Y * Z << endl;
        }
        else
        {
            cout << (X * 10) * Z << endl;
        }
    }
}
