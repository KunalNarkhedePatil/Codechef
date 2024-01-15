//Link:-https://www.codechef.com/problems/TYRES
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t=0;
  int N=0;
  cin>>t;
  
  while(t--)
  {
      cin>>N;
      
      if(N>=4)
      {
          if(N%4>=2)
          {
            cout<<"YES"<<endl;
          }
          else
          {
              cout<<"NO"<<endl;
          }
      }
      if(N<4)
      {
          cout<<"YES"<<endl;
      }
  }

}

