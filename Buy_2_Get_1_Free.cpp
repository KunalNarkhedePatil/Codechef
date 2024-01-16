//Link:-https://www.codechef.com/problems/SALE2
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	int N=0,X=0;
	cin>>t;
	
	while(t--)
	{
	    cin>>N>>X;
	    if(N%3==0)
	    {
	       int A=N/3;
	       cout<<(2*A)*X<<endl;
	    }
	    else
	    {
	        int A=N/3;
	        int P=2*A;
	        int B=N%3;
	        cout<<(P*X)+(B*X)<<endl;
	    }
	}

}
