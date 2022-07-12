#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t,size_of_arr;
    cin>>t;
    map<int ,int>mp;
    int flag=0;

    while(t--)
    {
        cin>>size_of_arr;
        int arr[size_of_arr];
        for(int i=0;i<size_of_arr;i++)
        {
            cin>>arr[i];
        }
         
        for(auto i:arr)
        {
            mp[i]=0;
        }

        for(auto i:arr)
        {
            mp[i]++;
        }

       
        for(auto i:arr)
        {
           if(mp[i]%i==0)
           {
            flag=1;
           }
           else{
            flag=0;
            break;
           }
        }

        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES\n";
        }

        

        
        
    }
}
