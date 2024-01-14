//Link:-https://www.codechef.com/problems/AIRHOCKEY
#include <bits/stdc++.h>
using namespace std;
int max(int A,int B)
{
    if(A>B)
    {
        return A;
    }
    else
    {
        return B;
    }
}
int main() {
	int t=0;
	int A=0,B=0;
	cin>>t;
	
	while(t--)
	{
	    cin>>A>>B;
	    
	    int Max=max(A,B);
	    
	    cout<<7-Max<<endl;
	}

}
