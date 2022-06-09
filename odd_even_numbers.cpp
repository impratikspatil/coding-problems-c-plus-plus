
// to find numbers are even or odd 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
   cin>>t;
   while(t--)
   {
       cin>>n;
       
       if((n & 1)==0)
       {
           cout<<"even\n";
       }
       else{
           cout<<"odd\n";
       }
   }

}