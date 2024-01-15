//Link:-https://www.codechef.com/problems/FINDK3?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	cin>>t;
	
	while(t--)
	{
	    int X=0,Y=0,Z=0,A=0,B=0;
	    
	    cin>>X>>Y>>Z;
	    if((X*Y)%Z==0)
	    {
	        A=X*Y;
	        B=Z;
	        cout<<A<<" "<<B<<endl;
	    }
	    else if((Y*Z)%X==0)
	    {
	        A=Y*Z;
	        B=X;
	        cout<<A<<" "<<B<<endl;
	    }
	    else if((X*Z)%Y==0)
	    {
	        A=X*Z;
	        B=Y;
	        cout<<A<<" "<<B<<endl;
	    }
	    else
	    {
	        cout<<"-1"<<endl;
	    }
	}

}
