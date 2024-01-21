// Link:-https://www.codechef.com/problems/ATM2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int N = 0, K = 0;
    cin >> t;

    while (t--)
    {
        N = 0, K = 0;
        cin >> N >> K;
        int Arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> Arr[i];
        }
        for (int i = 0; i < N; i++)
        {
            int X = K - Arr[i];
            if (X < 0)
            {
                cout << "0";
            }
            else
            {
                cout << "1";
                K = K - Arr[i];
            }
        }
        cout << endl;
    }
}
