// Link:-https://www.codechef.com/problems/CHEFCAND
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int N = 0, X = 0;
    cin >> t;

    while (t--)
    {
        cin >> N >> X;

        if (N > X)
        {
            int A = N - X;
            if (A % 4 == 0)
            {
                cout << A / 4 << endl;
            }
            else
            {
                cout << (A / 4) + 1 << endl;
            }
        }
        else
        {
            cout << "0" << endl;
        }
    }
}
