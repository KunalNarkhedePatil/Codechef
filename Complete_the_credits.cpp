//Link:-https://www.codechef.com/problems/CREDITS
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t=0;
  int N=0;
  cin>>t;
  
  while(t--)
  {
      cin>>N;
      if(N>65)
      {
        cout<<"Overload"<<endl;
      }
      else if(N<35)
      {
        cout<<"Underload"<<endl;
      }
      else
      {
        cout<<"Normal"<<endl;
      }
  }

}
