// Link:-https://www.codechef.com/problems/CARCHOICE?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;

    cin >> t;

    while (t--)
    {
        float X1 = 0, X2 = 0, Y1 = 0, Y2 = 0;

        cin >> X1 >> X2 >> Y1 >> Y2;

        float A = Y1 / X1;
        float B = Y2 / X2;

        if (A < B)
        {
            cout << "-1" << endl;
        }
        else if (B < A)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}
