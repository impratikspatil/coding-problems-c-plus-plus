#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int n,m;

    while(t--)
    {
        cin>>n>>m;
       int row = floor(float(n)/2);
       int col=floor(float(m)/2);

       int mul=row * col*4;

       int total=n*m;

       cout<<total-mul<<endl;

        

    }
}
