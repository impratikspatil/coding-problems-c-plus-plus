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
        if(s[i]!=s[i+1])
        {
            count++;
            i++;
        }
       }
       cout<<count<<endl;
       if(count==0)
       {
        cout<<'0'<<endl;
       }
       else if(count==1)
       {
        cout<<count<<endl;
       }
       else if(s[0]='0' && s[l-1]=='1')
       {
        cout<<count-1<<endl;
       }
       else if(s[0]='1' && s[l-1]=='0')
       {
        cout<<count<<endl;
       }
       else if(s[0]=='1' && s[l-1]=='1')
       {
        cout<<count<<endl;
       }
       else if(s[0]=='0' && s[l-1]=='0')
       {
         cout<<count-1<<endl;
       }
        
    }
}
