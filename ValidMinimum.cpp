#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    vector<int>v;


    while(t--)
    {
        cin>>a>>b>>c;

        v[0]=a;
        v[1]=b;
        v[2]=c;

        sort(v.begin(),v.end());

        if(v[0]==v[1])
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n"
        }




        
    }
}
