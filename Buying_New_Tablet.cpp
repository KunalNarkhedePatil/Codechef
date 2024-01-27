// Link:-https://www.codechef.com/problems/TABLET
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;

    cin >> t;

    while (t--)
    {
        int N = 0, B = 0;

        cin >> N >> B;

        int Prev = 0;
        while (N--)
        {
            int W = 0, H = 0, P = 0;

            cin >> W >> H >> P;

            if (P <= B)
            {
                if (W * H >= Prev)
                {
                    Prev = W * H;
                }
            }
        }
        if (Prev == 0)
        {
            cout << "no tablet" << endl;
        }
        else
        {
            cout << Prev << endl;
        }
    }
}
