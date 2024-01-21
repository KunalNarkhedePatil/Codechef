// Link:-https://www.codechef.com/problems/DEVSPORTS
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int Z = 0, Y = 0, A = 0, B = 0, C = 0;
    cin >> t;
    while (t--)
    {
        cin >> Z >> Y >> A >> B >> C;

        int rem = Z - Y;
        int sum = A + B + C;

        if (rem >= sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
