

//codechef link - https://www.codechef.com/JUNE221D/submit/DIVBYI

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t,N;
    cin>>t;

    while(t--)
    {
        cin>>N;

        if(N%2==0){
            int x=N/2;
            int m=x+1;
            
            for(int i=0;i<N;i++)
            {
                if(i%2==0)
                {
                    cout<<x<<" ";
                    x-=1;
                }
                else{
                    cout<<m<<" ";
                    m+=1;

                }
            }

        }
        else{

             int j=(N/2)+1;
            int k=j-1;
            
            for(int i=0;i<N;i++)
            {
                if(i%2==0)
                {
                    cout<<j<<" ";
                    j+=1;
                }
                else{
                    cout<<k<<" ";
                  k-=1;

                }
            }




        }
        cout<<endl;
    }
}