#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int n;

    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            for(int i=n-1;i>0;i=i-2)
            {
                cout<<i<<" ";
            }
            for(int i=2;i<=n;i=i+2)
            {
                cout<<i<<" ";
            }
            cout<<endl;

        }else{
            for(int i=n-1;i>=2;i=i-2)
            {
                cout<<i<<" ";
            }
            for(int i=1;i<=n;i=i+2)
            {
                cout<<i<<" ";
            }
            cout<<endl;

        }

    }
}
