// Link:-https://www.codechef.com/problems/TRAVELFAST
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

        if (X > Y)
        {
            cout << "CAR" << endl;
        }
        else if (Y > X)
        {
            cout << "BIKE" << endl;
        }
        else
        {
            cout << "SAME" << endl;
        }
    }
}
