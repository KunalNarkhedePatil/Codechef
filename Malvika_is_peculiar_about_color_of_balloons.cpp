// Link:-https://www.codechef.com/problems/CHN09?tab=statement
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    string s;
    int aCnt = 0;
    int bCnt = 0;
    int len = 0;

    while (t--)
    {
        cin >> s;
        len = s.length();
        aCnt = 0;
        bCnt = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'a')
            {
                aCnt++;
            }
            else
            {
                bCnt++;
            }
        }
        if (aCnt < bCnt)
        {
            cout << aCnt << endl;
        }
        else
        {
            cout << bCnt << endl;
        }
    }
}
