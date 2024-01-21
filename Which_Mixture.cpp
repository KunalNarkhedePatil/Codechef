// Link:-https://www.codechef.com/problems/MIXTURE
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t = 0;
    int A = 0, B = 0;
    cin >> t;

    while (t--)
    {
        cin >> A >> B;

        if (A == 0)
        {
            cout << "Liquid" << endl;
        }
        else if (B == 0)
        {
            cout << "Solid" << endl;
        }
        else
        {
            cout << "Solution" << endl;
        }
    }
}
