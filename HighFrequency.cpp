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
        int v[n];
        map<int,int>s;
        

        for(int i=0;i<n;i++)
        {
           cin>>v[i];
           s[v[i]]++;
           
            

        }

        // for(int i=0;i<n;i++)
        // {
        //     cout<<v[i]<<" ";
        // }

       
     
     
        

        int min=INT_MAX;
        int max=INT_MIN;
        int prev;

        for(auto i=0;i<n;i++)
        {
          
            if(s[v[i]]>max)
            {
                max=s[v[i]];
                
            }
        }
        for(auto i=0;i<n;i++)
        {
            v
        }

        // cout<<"max="<<max<<endl;
        // cout<<"min="<<min<<endl;

        if(s[v[0]]==n)
        {
            cout<<s[v[0]]-2<<endl;
        }
        else if(max==min)
        {
            cout<<min<<endl;
        }
        else if((max-2)==min){
            cout<<max-2<<endl;
        }
        else{
            int x=max/2;
            int diff=max-x;

            if(diff>min){
                  cout<<diff<<endl;
            }else{
                cout<<min<<endl;
            }
        }

    }
}
