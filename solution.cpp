#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    while(t--)
    {
        cin>>a>>b>>c;
        int n=c/b; //200/100=2;
        int r=c%b;  //200%100=0;
        if(n<a)
        {
            cout<<n*(b*b)+(r*r)<<endl;
            //2*(100*100)+(0*0);
        }
        else
        {
            cout<<a*(b*b)<<endl;
            //10*(100*100)
            //this case will work for 2nd testcase
        }
       

        
    
    }
}
