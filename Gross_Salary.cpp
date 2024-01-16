//Link:-https://www.codechef.com/problems/FLOW011?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
int t=0;
cin>>t;
int S=0;

while(t--)
{
    cin>>S;
    
    if(S<1500)
    {
        float HRA=0.1*S;
        float DA=0.9*S;
        
        float GS=S+HRA+DA;
        
        cout<<fixed<<setprecision(2)<<GS<<endl;
        
    }
    else if(S>=1500)
    {
        float DA=0.98*S;
        
        float GS=S+500+DA;
        cout<<fixed<<setprecision(2)<<GS<<endl;
    }
}

}
