// Link:-https://www.codechef.com/problems/HDIVISR
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    int Arr[10];
    int j = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (N % i == 0)
        {
            Arr[j] = i;
            j++;
        }
    }
    cout << Arr[j - 1] << endl;
}
