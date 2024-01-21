// Link:-https://www.codechef.com/problems/EZSPEAK
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    string s;
    int len = 0;
    while (t--)
    {
        cin >> len;
        cin >> s;

        if (len < 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            int icnt = 0;
            bool flag = false;
            for (int i = 0; i < len; i++)
            {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                {
                    icnt = 0;
                    continue;
                }
                else
                {
                    icnt++;
                    if (icnt >= 4)
                    {
                        flag = true;
                    }
                }
            }
            if (flag == true)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
}
