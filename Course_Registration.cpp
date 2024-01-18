// Link:-https://www.codechef.com/problems/COURSEREG
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int N = 0, M = 0, K = 0;
    cin >> t;
    while (t--)
    {
        cin >> N >> M >> K;

        if (N + K <= M)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
