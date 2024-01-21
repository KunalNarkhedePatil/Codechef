//Link:-https://www.codechef.com/problems/CCOOK
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	
	cin>>t;
	int Zero=0;
	int One=0;
	int No=0;
	while(t--)
	{
	    Zero=0;
	    One=0;
	    
	    for(int i=1;i<=5;i++)
	    {
	        cin>>No;
	        
	        if(No==0)
	        {
	            Zero++;
	        }
	        else
	        {
	            One++;
	        }
	    }
	    if(Zero==5)
	    {
	        cout<<"Beginner"<<endl;
	    }
	    else if(One==2)
	    {
	       cout<<"Middle Developer"<<endl;
	    }
	    else if(One==1)
	    {
	       cout<<"Junior Developer"<<endl; 
	    }
	    else if(One==5)
	    {
	        cout<<"Jeff Dean"<<endl;
	    }
	    else if(One==3)
	    {
	        cout<<"Senior Developer"<<endl;
	    }
	    else if(One==4)
	    {
	        cout<<"Hacker"<<endl;
	    }
	    
	}
}
