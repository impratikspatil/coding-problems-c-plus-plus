#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int n,x;

    while(t--)
    {
        cin>>n>>x;

        int diff=x-(n-1);
        int arr[n];
        if(diff<=0)
        {
            cout<<-1<<endl;
        }
    else{

    
        cout<<diff<<" ";
       for(int i=1;i<=n;i++)
       {
        if(i==diff)
        {
            continue;
        }
            cout<<i<<" ";
       }
       cout<<endl;
    }
}
}