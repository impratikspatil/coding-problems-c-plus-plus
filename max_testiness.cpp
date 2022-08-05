#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int a,b,c,d;

    while(t--)
    {

        cin>>a>>b>>c>>d;

        int sum;
        sum=max(a,b)+max(c,d);

        cout<<sum<<endl;
        
    }
}
