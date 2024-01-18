// Link:-https://www.codechef.com/problems/PRACTICEPERF
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Arr[4];
    int iCnt = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> Arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (Arr[i] >= 10)
        {
            iCnt++;
        }
    }
    cout << iCnt << endl;
}
