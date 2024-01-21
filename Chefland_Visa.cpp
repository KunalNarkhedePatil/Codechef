//Link:-https://www.codechef.com/problems/VISA
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	cin>>t;
	int x1=0,x2=0,y1=0,y2=0,z1=0,z2=0;
	
	while(t--)
	{
	    cin>>x1>>x2>>y1>>y2>>z1>>z2;
	    
	    if(x1<=x2 && y1<=y2 && z1>=z2)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	

}

