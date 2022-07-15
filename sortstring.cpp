#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    int l;
    cin>>t;
    int count;

    while(t--)
    {
        
        cin>>l;
        count=0;
       char s[l];
       for(int i=0;i<l;i++)
       {
        cin>>s[i];
       }
       for(int i=0;i<l-1;i++)
       {
        if(s[i]=='1' && s[i+1]=='0')
        {
            count++;
            
        }
       }
       cout<<count<<endl;
    
        
    }
}
//