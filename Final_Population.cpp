//Link:-https://www.codechef.com/problems/POPULATION
#include <bits/stdc++.h>
using namespace std;

int main() {
   int t=0;
   int X=0,Y=0,Z=0;
   cin>>t;
   
   while(t--)
   {
      cin>>X>>Y>>Z;
      
      X=X-Y;
      X=X+Z;
      cout<<X<<endl;
   }

}
