// Link:-https://www.codechef.com/problems/SEVENRINGS
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int ans = n * x;
        int iCnt = 0;
        while (ans > 9)
        {
            iCnt++;
            ans = ans / 10;
        }
        iCnt++;
        if (ans != 0 && iCnt == 5)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
