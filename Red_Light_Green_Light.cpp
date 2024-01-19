// Link:-https://www.codechef.com/problems/DOLL
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int N = 0, K = 0;
    int iCnt = 0;
    while (t--)
    {
        iCnt = 0;
        cin >> N >> K;
        int H = 0;
        for (int i = 1; i <= N; i++)
        {
            cin >> H;

            if (H > K)
            {
                iCnt++;
            }
        }
        cout << iCnt << endl;
    }
}
