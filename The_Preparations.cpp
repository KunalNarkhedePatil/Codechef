//Link:-https://www.codechef.com/problems/SUPCHEF
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	int M=0,N=0,K=0;
	cin>>t;
	
	while(t--)
	{
	    cin>>M>>N>>K;
	    
	    if(M>(N*K))
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}

}
