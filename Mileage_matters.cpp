#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int n,x,y,a,b;

    while(t--)
    {
        cin>>n>>x>>y>>a>>b;

        float total_petrol=float(n)/a;
        float costp=total_petrol*x;

        float total_diesel=float(n)/b;
        float costd=total_diesel*y;

        if(costd==costp)
        {
             cout<<"ANY"<<endl;
        }
        else if(costp>costd)
        {
            cout<<"DIESEL"<<endl;
        }
        else{
            cout<<"PETROL"<<endl;
        }

        
    }
}
