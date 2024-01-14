//Link:-https://www.codechef.com/problems/NEWCC
#include <bits/stdc++.h>
using namespace std;

int main() {
    int X=0,Y=0;
    
    cin>>X>>Y;
    
    if(X<Y)
    {
        cout<<"Old"<<endl;
    }
    else if(Y<X)
    {
        cout<<"New"<<endl;
    }
    else
    {
        cout<<"Same"<<endl;
    }

}
