//Link:-https://www.codechef.com/problems/INVESTMENT
#include <bits/stdc++.h>
using namespace std;

int main() {
	
   int t=0;
   int interest_rate=0,inflation_rate=0;
   cin>>t;
   
   while(t--)
   {
       cin>>interest_rate>>inflation_rate;
       
       if(interest_rate>=inflation_rate*2)
       {
           cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"No"<<endl;
       }
   }
}
