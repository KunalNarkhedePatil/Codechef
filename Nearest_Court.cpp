//Link:-https://www.codechef.com/problems/NEARESTCOURT?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	int X=0,Y=0;
	cin>>t;
	
	while(t--)
	{
	    cin>>X>>Y;
	    int dist=X-Y;
	    if(dist<0)
	    {
	        dist=-dist;
	    }
	    if(dist==1)
	    {
	        cout<<"1"<<endl;
	    }
	    else if(dist%2==0)
	    {
	        cout<<dist/2<<endl;
	    }
	    else if(dist%2!=0)
	    {
	        cout<<(dist/2)+1<<endl;
	    }
	}

}
