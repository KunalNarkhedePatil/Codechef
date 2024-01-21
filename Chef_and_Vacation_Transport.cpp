// Link:-https://www.codechef.com/problems/CHEFTRANS
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

        if ((X + Y) < Z)
        {
            cout << "PLANEBUS" << endl;
        }
        else if (Z < (X + Y))
        {
            cout << "TRAIN" << endl;
        }
        else
        {
            cout << "EQUAL" << endl;
        }
    }
}
