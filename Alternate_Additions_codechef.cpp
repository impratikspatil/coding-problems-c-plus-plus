//// codechef link -  https://www.codechef.com/JUNE221D/problems/ALTERADD

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int A,B;

    while(t--)
    {
        cin>>A>>B;

        int x=B-A;
        if(x%3==0 || x%3==1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    
}
}