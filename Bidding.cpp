#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int a;
    while(t--)
    {
        cin>>a;
        vector<int> v(a);
        for(int i=0;i<a;i++)
        {
            cin>>v[i];
        }
        int mi=*min_element(v.begin(),v.end());
        if(mi==1)
        {
            cout<<"CHEF"<<endl;
        }
        
        else
        {
            int sum=0;
            sum=accumulate(v.begin(),v.end(),sum);
            if((sum-(a*2))%2==0)
            {
                cout<<"CHEFINA"<<endl;
            }
            else
            {
                cout<<"CHEF"<<endl;
            }

        }

        
        // if(mi%2==0)
        // {
        //     cout<<"CHEFINA"<<endl;
        // }
        // else{
        //     cout<<"CHEF"<<endl;
        // }
        

        
    
    }
}
