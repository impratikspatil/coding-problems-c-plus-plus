#include<bits/stdc++.h>
using namespace std;
#define endl "\n"


int main()
{
    int t;
    cin>>t;
    long long n,x;

    while(t--)
    { 
       cin>>n>>x;
       int cnt=0;
       int cntone=0;

       vector<char>vbin;
       vector<int>vind;

       for(int i=0;i<n;i++){
        char a;
        cin>>a;
        if(a=='1')
        {
            cntone++;
        }
        if(a=='0')
        {
            cnt++;
        }
        vbin.push_back(a);
       }

       int subsize=(x-1)/2;
		
		if(cnt<=subsize)
		{
			cout<<cnt+cntone<<endl;
		}
        else{
            cout<<cntone+subsize<<endl;
        }
// index of 0 are stored here
    //    for(int i=0;i<n;i++)
    //    {
    //     if(vbin[i]==0)
    //     {
    //         cnt++;
    //         vind.push_back(i);
    //     }
    //    }




     
    }
}
