// Link:-https://www.codechef.com/problems/ADVITIYA2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;

    cin >> t;

    while (t--)
    {
        int Arr[5];
        int iCnt = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> Arr[i];
        }
        for (int i = 0; i < 5; i++)
        {
            if (Arr[i] == 1)
            {
                iCnt++;
            }
        }
        if (iCnt >= 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
