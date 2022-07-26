#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int n,k,m;


    while(t--)
    {
        cin>>n>>k>>m;

        int bags=ceil(float(n)/(k*m));
        cout<<bags<<endl;

    }
}
