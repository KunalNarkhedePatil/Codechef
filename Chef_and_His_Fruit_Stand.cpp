//Link:-https://www.codechef.com/problems/FRUITCHAAT
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	int X=0,Y=0;
	cin>>t;
	
	while(t--)
	{
	    cin>>X>>Y;
	    
	    if(Y<X/2)
	    {
	        cout<<Y<<endl;
	    }
	    else
	    {
	        cout<<X/2<<endl;
	    }
	}

}
