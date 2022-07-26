#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int normal_price, premier_price, numberofburgers,cost;

    while(t--)
    {

        cin>>normal_price>>premier_price>>numberofburgers>>cost;

        if(normal_price*numberofburgers>cost)
        {
            cout<<"-1"<<endl;
        }
        else if(premier_price*numberofburgers<=cost)
        {
            cout<<"0 "<<numberofburgers<<endl;
        }
        else{
            
            int totalnormal=normal_price*numberofburgers;
            int rem=cost - totalnormal;
            int count=rem/(premier_price - normal_price);
            
            cout<<(numberofburgers-count)<<" "<<count<<endl;

            
        }
      
        

       
        
    }
}

