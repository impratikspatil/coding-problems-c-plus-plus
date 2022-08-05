#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int N;
    vector<char>Initial;
    vector<char>Final;

  
    while(t--)
    {
        cin>>N;
        for(int i=0;i<N;i++)
        {
            char a;
            cin>>a;
            Initial.push_back(a);
        }

         for(int i=0;i<N;i++)
        {
            char b;
            cin>>b;
            Final.push_back(b);
        }

        int cntI=0;
        int cntF=0;
        for(auto i:Initial)
        {
            if(i=='1')
            {
                cntI++;
            }
        }
        
        for(auto i:Final)
        {
            if(i=='1')
            {
                cntF++;
            }
        }

        int diff=abs(cntI-cntF);

        if(diff%2==0)
        {
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }

        Initial.clear();
        Final.clear();


       

      
      
        
    }
}
