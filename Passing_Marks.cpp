// Link:-https://www.codechef.com/problems/CUTOFF?tab=statement
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        int index = n - x;
        int ans = a[index] - 1;
        cout << ans << endl;
    }
}
