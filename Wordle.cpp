//Link:-https://www.codechef.com/problems/WORDLE?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	cin>>t;
	
	while(t--)
	{
	   string hidden;
	   string guess;
	   
	   cin>>hidden;
	   cin>>guess;
	   
	   for(int i=0;i<5;i++)
	   {
	       if(hidden[i]==guess[i])
	       {
	           cout<<"G";
	       }
	       else
	       {
	           cout<<"B";
	       }
	   }
	   cout<<endl;
	}

}
