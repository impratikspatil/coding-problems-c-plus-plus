#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int n,k,x,y;


    while(t--)
    {
        cin>>n>>k>>x>>y;
        int red_lamp_cost=k*x;
        int rem=n-k;//0
                    //>0

        if(x>=y)
        {
            cout<<(red_lamp_cost+(rem*y))<<endl;
        }
        else{
            cout<<(red_lamp_cost+(rem*x))<<endl;
        }


    }
}
