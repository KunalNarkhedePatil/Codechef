// Link:-https://www.codechef.com/problems/FLOW010
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;

    cin >> t;

    while (t--)
    {
        char ch = '\0';
        cin >> ch;

        if (ch == 'B' || ch == 'b')
        {
            cout << "BattleShip" << endl;
        }
        else if (ch == 'C' || ch == 'c')
        {
            cout << "Cruiser" << endl;
        }
        else if (ch == 'D' || ch == 'd')
        {
            cout << "Destroyer" << endl;
        }
        else
        {
            cout << "Frigate" << endl;
        }
    }
}
