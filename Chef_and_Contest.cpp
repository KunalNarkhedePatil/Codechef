// Link:-https://www.codechef.com/problems/CHEFCONTEST
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int X = 0, Y = 0, P = 0, Q = 0;
    cin >> t;

    while (t--)
    {
        cin >> X >> Y >> P >> Q;

        int A = X + (P * 10);

        int B = Y + (Q * 10);

        if (A > B)
        {
            cout << "Chefina" << endl;
        }
        else if (B > A)
        {
            cout << "Chef" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
}
