// Link:-https://www.codechef.com/problems/PRB01?tab=submissions
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int n = 0;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int i = 0;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }

        if (i == n)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
