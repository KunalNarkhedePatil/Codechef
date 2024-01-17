//Link:-https://www.codechef.com/problems/PALL01
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int iNo)
{
    int Temp=iNo;
    
    int iRev=0;
    
    while(Temp!=0)
    {
        int iDigit=Temp%10;
        iRev=iRev*10+iDigit;
        Temp=Temp/10;
    }
    if(iRev==iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() {
	int t=0;
	cin>>t;
	int N=0;
	while(t--)
	{
	    cin>>N;
	    
	    if(isPrime(N))
	    {
	        cout<<"wins"<<endl;
	    }
	    else
	    {
	        cout<<"loses"<<endl;
	    }
	}

}
