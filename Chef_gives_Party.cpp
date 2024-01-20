// Link:-https://www.codechef.com/problems/PARTY2
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t = 0;
	int N = 0, X = 0, K = 0;
	cin >> t;

	while (t--)
	{
		cin >> N >> X >> K;

		if (N * X <= K)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}
