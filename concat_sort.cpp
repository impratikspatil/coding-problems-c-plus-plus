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
        vector<int>arr;
        set<int>indexarr;
        int min;
        vector<int>v;
        int ind;
        
        for(long i=0;i<n;i++)
        {
            int ele;
            cin>>ele;
            arr.push_back(ele);
           
        }
    
        for(int i=0;i<n;i++)
        {
            min=INT_MAX;
          for(int j=0;j<arr.size();j++)
          {
           
            if(arr[j]<min)
            {
                min=arr[j];
                ind=j;//ind=3
               
                
            }
            
          }
           v.push_back(ind);
           arr.erase(arr.begin()+ind);
        
        }



           int cn=0; 
          for(int i=0;i<n-1;i++)
          {
            if(v[i]>v[i+1])
            {
                cn++;

            }
          }
        //   cout<<"count="<<cn<<endl;

          if(cn>1)
          {
            cout<<"NO\n";
          }
          else{
            cout<<"YES\n";
          }

    
      

    }


}
