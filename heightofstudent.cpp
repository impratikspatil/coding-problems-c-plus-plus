#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int N;

    while(t--)
    {
        cin>>N;
        int arr[N];
        int count=0;
        map<int,int>m;
        set<int>s;
        //here i have stored freq into map

        for(int i=0;i<N;i++)
        {
            long ele;
            cin>>ele;
            s.insert(ele);
            
            m[ele]++;
          
        }
  


       for(auto i:s)
       {
         if(m[i]==1)
         {
            count++;
         }
       }

       if(count==0 )
       {
        cout<<count<<endl;
       }
       else if(count==1)
       {
         cout<<count<<endl;

       }
       
       else 
       {
        cout<<ceil(count/2.0)<<endl;
       }
       
       

    }
}
// my testcases observations:-

//  1 2 3                  2
// 1 2 2 1                 0
// 1 2 2 4                 1
// 1 2 3 4 5               3
// 1 2 3 4 5 6             3
// 1 2 3 4 5 6 7           4 

//3 3  1 4