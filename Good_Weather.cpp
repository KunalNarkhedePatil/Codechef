// Link:-https://www.codechef.com/problems/GOODWEAT
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int Arr[7];
    int Rainy = 0;
    int Sunny = 0;
    while (t--)
    {
        Rainy = 0;
        Sunny = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> Arr[i];
        }
        for (int i = 0; i < 7; i++)
        {
            if (Arr[i] == 1)
            {
                Sunny++;
            }
            else
            {
                Rainy++;
            }
        }
        if (Sunny > Rainy)
        {

            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }
}
