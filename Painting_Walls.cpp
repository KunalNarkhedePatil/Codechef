// Link:-https://www.codechef.com/problems/PAINTCHRIS
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

        int A = X * Y;
        cout << int((Z / 2) / A) << endl;
    }
}
