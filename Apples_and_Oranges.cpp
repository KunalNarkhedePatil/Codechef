// Link:-https://www.codechef.com/problems/APPLORNG
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int X = 0;
	int A = 0, B = 0;
	cin >> X;
	cin >> A >> B;

	if ((A + B) <= X)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}
