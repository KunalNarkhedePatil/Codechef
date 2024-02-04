// Link:-https://www.codechef.com/problems/DRUNKALK
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;

    cin >> t;

    while (t--)
    {
        int N = 0;

        cin >> N;

        if (N % 2 == 0)
        {
            int X = N / 2;
            int Y = N - X;

            cout << (X * 3) - Y << endl;
        }
        else
        {
            int X = (N / 2) + 1;
            int Y = N - X;

            cout << (X * 3) - Y << endl;
        }
    }
}
