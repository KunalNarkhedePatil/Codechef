// Link:-https://www.codechef.com/problems/BMI
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int M = 0, H = 0;
    cin >> t;

    while (t--)
    {
        cin >> M >> H;

        float BMI = M / (H * H);

        if (BMI <= 18)
        {
            cout << "1" << endl;
        }
        else if (BMI >= 19 && BMI <= 24)
        {
            cout << "2" << endl;
        }
        else if (BMI >= 25 && BMI <= 29)
        {
            cout << "3" << endl;
        }
        else
        {
            cout << "4" << endl;
        }
    }
}
