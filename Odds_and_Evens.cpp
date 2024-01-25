// Link:-https://www.codechef.com/problems/ODDSEVENS
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;

    while (t--)
    {
        int a = 0, b = 0;

        cin >> a >> b;

        int c = a + b;

        if (c % 2 == 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }
}
