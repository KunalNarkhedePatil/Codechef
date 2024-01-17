// Link:-https://www.codechef.com/problems/MELTGOLD
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

        for (int i = 1; i < X; i++)
        {
            Y = Y + i;

            if (Y >= X)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
