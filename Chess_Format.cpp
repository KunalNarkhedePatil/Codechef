// Link:-https://www.codechef.com/problems/CHSFORMT
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int a = 0, b = 0;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        if (a + b < 3)
        {
            cout << "1" << endl;
        }
        else if (a + b >= 3 && a + b <= 10)
        {
            cout << "2" << endl;
        }
        else if (a + b >= 11 && a + b <= 60)
        {
            cout << "3" << endl;
        }
        else
        {
            cout << "4" << endl;
        }
    }
}
