//Link:-https://www.codechef.com/problems/LAZYCHF
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t=0;
    int x=0,m=0,d=0;
    cin>>t;
    
    while(t--)
    {
        cin>>x>>m>>d;
        
        int a=m*x;
        int b=x+d;
        
        if(a<b)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<b<<endl;
        }
    }
}
