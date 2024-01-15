//Link:-https://www.codechef.com/problems/DNASTORAGE?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string k="";
       for(int i=0;i<n;i=i+2)
       {
            if((s[i]=='0') && (s[i+1]=='0'))
            {
                k=k+"A";
            }
            else if((s[i]=='0') && (s[i+1]=='1'))
            {
               
                k=k+"T";
            }
            else if((s[i]=='1') && (s[i+1]=='0'))
            {
                k=k+"C";
            }
            else if((s[i]=='1') && (s[i+1]=='1'))
            {
                k=k+"G";
            }
       }
       cout<<k<<endl;
    }

}
