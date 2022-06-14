
//codeforeces link https://codeforces.com/contest/1692/problem/A

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int a,b,c,d;
    int cn=0;

    while(t--)
    {
      cin>>a>>b>>c>>d;

      if(a<b)
      {
        cn++;
      }
      if(a<c)
      {
        cn++;
      }
      if(a<d)
      {
        cn++;
      }
      cout<<cn<<endl;
    
    }
}