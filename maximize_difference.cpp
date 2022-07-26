#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    long n;
    


    while(t--)
    {
        cin>>n;
        long arr[n];
        set<int>indexarr;
        vector<int>v1;
        vector<int>v2;
       
        for(long i=0;i<n;i++)
        {
             cin>>arr[i];
    
        }

        for(auto i=0;i<n-1;i++)
        {

                //  cout<<i<<"\n";
            if(arr[i]<arr[i+1] )
            {
                indexarr.insert(i);//stored smalled ele index
                // cout<<i<<" ";

            }
            else if(arr[i+1]>arr[i-1])
            {
                indexarr.insert(i+1);
                // cout<<i<<" ";
            }
            else{
                continue;
            }


    }

    for(auto i=indexarr.begin();i!=indexarr.end();i++)
    {
       v1.push_back(arr[*i]);
    }

    for(auto i=0;i<n;i++)
    {
        if(indexarr.find(i)==indexarr.end())
        {
            v2.push_back(arr[i]);

        }
    }

    for(auto i=v1.begin();i!=v1.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";

     for(auto i=v2.begin();i!=v2.end();i++)
    {
        cout<<*i<<" ";
    }

}
}