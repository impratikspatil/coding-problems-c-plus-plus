#include<bits/stdc++.h>
using namespace std;
#define endl "\n"




int main()
{
    int t;
    cin>>t;
    int N;
    int count;

    while(t--)
    {
        cin>>N;
        int arr[N];
        int p1;
        int pn;
        int x=N-1;

        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            {
                p1=i;
            }
            else if(arr[i]==N)
            {
                pn=i;
            }
             cout<<"p1="<<p1<<" "<<"pn="<<pn<<endl;

        }
        
        if(p1==0 )
        {
            if(pn==(N-1))
            {
                cout<<"0"<<endl;
            }
            else{
                cout<<(x-pn)<<endl;
            }
            

        }
        else if(pn==(N-1)){
            cout<<p1<<endl;
            
        }
        else{
            if(p1>pn)
            {
                cout<<p1+(x-pn)-1<<endl;
            }
            else{
                cout<<p1+(x-pn)<<endl;

            }
        }
        
    
     

         
   
}
}

