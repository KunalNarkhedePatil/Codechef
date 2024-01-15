//Link:-https://www.codechef.com/problems/HARDBET
#include <bits/stdc++.h>
using namespace std;
int findMin(int A,int B,int C)
{
    if(A<B && A<C)
    {
        return A;
    }
    else if(B<C)
    {
        return B;
    }
    else
    {
        return C;
    }
}
int main() {
   int t=0;
   int A=0,B=0,C=0;
   cin>>t;
   while(t--)
   {
       cin>>A>>B>>C;
       
       int min=findMin(A,B,C);
       if(min==A)
       {
           cout<<"Draw"<<endl;
       }
       else if(min==B)
       {
           cout<<"Bob"<<endl;
       }
       else 
       {
           cout<<"Alice"<<endl;
       }
   }

}
