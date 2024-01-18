// Link:-https://www.codechef.com/problems/RECENTCONT
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int N = 0;
    cin >> t;
    string code;
    int iCnt1 = 0;
    int iCnt2 = 0;
    while (t--)
    {
        cin >> N;
        iCnt1 = 0;
        iCnt2 = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> code;

            if (code == "START38")
            {
                iCnt1++;
            }
            else
            {
                iCnt2++;
            }
        }
        cout << iCnt1 << " " << iCnt2 << endl;
    }
}
