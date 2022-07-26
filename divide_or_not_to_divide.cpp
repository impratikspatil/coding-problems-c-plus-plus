#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    long a,b,n;
    long x;

    while(t--)
    {
         cin>>a>>b>>n;
         if(a%b==0 || b%a==0)
         {
             cout<<"-1"<<endl;
         }
         else if(n%a==0 && n%b!=0)
         {
            cout<<n<<endl;
         }
         else{
            int i=(n/a)+1;//3
            int x=i*a;
                while(true)
                {
                    if(x%a==0 && x%b!=0)
                    {
                        cout<<x<<endl;
                        break;
                    }
                    x=x+a;
                }

         }

     

        
    }
}

//