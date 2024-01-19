// Link:-https://www.codechef.com/problems/COMPRESSVD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int N = 0;
    while (t--)
    {
        cin >> N;
        int Arr[N];
        int iCnt = N;
        for (int i = 0; i < N; i++)
        {
            cin >> Arr[i];
        }
        for (int i = 0; i < N; i++)
        {
            if (i != N - 1)
            {
                if (Arr[i] == Arr[i + 1])
                {
                    iCnt--;
                }
            }
        }
        cout << iCnt << endl;
    }
}
