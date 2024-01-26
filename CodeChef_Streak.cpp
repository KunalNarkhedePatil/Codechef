// Link:-https://www.codechef.com/problems/CS2023_STK?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int OmCnt = 0;
        int AddyCnt = 0;
        int X = 0;
        int Y = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                X++;
            }
            else
            {
                OmCnt = max(OmCnt, X);
                X = 0;
            }
        }
        OmCnt = max(OmCnt, X);

        for (int i = 0; i < n; i++)
        {
            if (b[i] != 0)
            {
                Y++;
            }
            else
            {
                AddyCnt = max(AddyCnt, Y);
                Y = 0;
            }
        }
        AddyCnt = max(AddyCnt, Y);
        if (OmCnt > AddyCnt)
        {
            cout << "Om" << endl;
        }
        else if (AddyCnt > OmCnt)
        {
            cout << "Addy" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }

}
