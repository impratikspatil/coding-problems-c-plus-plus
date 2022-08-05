#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int x,y;

    while(t--)
    {
        cin>>x>>y;
        vector<int>v1;
        vector<int>v2;
        int div=ceil(float(x)/2);
        int diff=x-div;
        int n1=max(div,diff);
        int n2=min(diff,div);

        v1.push_back(n2);
        v1.push_back(n1);

        // [1,2]

        for(int i=n1+1;i<(y/n1);i++)
        {
            if(y%i==0)
            {
                if((y/i)>n1)
                {
                    v2.push_back(i);
                    v2.push_back((y/i));
                    break;
                }
            }
        }
        if(v2.size()==0)
        {
            cout<<-1<<endl;
        }
        else{
             for(auto i:v1)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto i:v2)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        }

       


    }
}
