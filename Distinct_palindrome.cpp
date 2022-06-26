#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void check(int sum)
{
    vector<int>a;
    for(int i=0;i<sum;i++)
    {
        a.push_back(pow(2,i));
    }
    
    int j=0;
    int s=0;
    while(s<=sum)
    {
        s=s+a[j];
        if(s==sum)
        {
            cout<<"YES\n";
            break;
        }
    }
    if(s>sum)
    {
          cout<<"NO\n";

    }
  
    
}


int main()
{
    int t,A,B,C;
    cin>>t;
    while(t--)
    {
        cin>>A>>B>>C;
        int a=max(A,max(B,C));
        cout<<a<<endl;
        if(a==A)
        {
            int diff1=A-B;
            int diff2=A-C;
            int sume=diff1+diff2;
            cout<<sume<<endl;
            check(sume);
            

        }
        else if(a==B)
        {
             int diff1=B-A;
            int diff2=B-C;
            int sume=diff1+diff2;
            cout<<sume<<endl;
            check(sume);
            

        }
        else if(a==C)
        {
            int diff1=C-A;
            int diff2=C-B;
            int sume=diff1+diff2;
            check(sume);
            

        }


    }
}