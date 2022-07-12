#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int findnum(long n)
{
    int res=0;
    for(int j=n;j>=1;j--)
    {
        if(j & (j-1)==0)
        {
            res=j;
            break;
        }
    }
    return res;
   
}


int main()
{
    int t;
  
    cin>>t;
    

    while(t--)
    {
        long N;
        cin>>N;

        long arr[N+1];
       
        for(auto i=0;i<N+1;i++)
        {
            cin>>arr[i];
        }
        
        long ans[3]={0,0,0};

       
       for(int i=findnum(N);i>0;i/=2)
       {
        long dif=arr[i]-arr[0];
        if(dif<0)
        {
            dif*=-1;
            int ct=dif/i;
            if(ct==1)
            {
                ct=2;
                if(ans[0]^i<=N)
                {
                    ans[0]^=i;
                    ct--;
                }
                if(ct && (ans[1]^i)<=N)
                {
                    ans[1]^=i;
                    ct--;
                }
                if(ct>0 && (ans[2]^i) <=N)
                {
                    ans[2]^=i;
                }
                
            }
            else if(ct==3)
            {
                 ans[0]^=i;
                 ans[1]^=i;
                 ans[2]^=i;


            }

        }
        else{
            int ct=dif/i;
            if(ct==1)
            {
                if(ans[0]^i<=N)
                {
                    ans[0]^=i;
                }else if(ans[1]^i<=N)
                {
                     ans[1]^=i;
                }
                else 
                {
                     ans[2]^=i;
                }
            }
        }
        sort(ans,ans+3);
        

       }

       printf("%ld %ld %ld\n",ans[0],ans[1],ans[2]);
      



       
       
    }
    return 0;
}


