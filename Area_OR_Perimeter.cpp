// Link:-https://www.codechef.com/problems/AREAPERI
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L = 0, B = 0;

    cin >> L >> B;

    int Area = L * B;
    int peri = 2 * (L + B);

    if (Area > peri)
    {
        cout << "Area" << endl;
        cout << Area << endl;
    }
    else if (peri > Area)
    {
        cout << "Peri" << endl;
        cout << peri << endl;
    }
    else
    {
        cout << "Eq" << endl;
        cout << Area << endl;
    }
}
