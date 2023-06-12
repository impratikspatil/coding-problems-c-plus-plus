#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,m;
    cin>>t;

    while(t--)
    {
        cin>>m;
        vector<vector<int>>vc(m);

        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;

            for(int k=0;k<x;k++)
            {
                int num;
                cin>>num;
                vc[i].push_back(num);
                // cout<<num<<" ";
            }
            // cout<<endl;
        }

    set<int>done;
    vector<int>ans(m,-1);
         
        for(int i=m-1;i>=0;i--)
        {
        
            for(int j=0; j<vc[i].size();j++)
            {
                if(done.count(vc[i][j])==0)
                {
                    done.insert(vc[i][j]);
                    ans[i]=vc[i][j];
                    // cout<<"ans of i is"<<ans[i]<<endl;
                  
                }
            }
            if(ans[i]==-1)
            {
                cout<<-1<<endl;
                return 0;
            }
        }

        for(int c=0;c<m;c++)
        {
            cout<<ans[c]<<" ";
        }
        cout<<endl;
      
        
    }

    return 0;

  
}