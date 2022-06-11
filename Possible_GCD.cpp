///codechef link -https://www.codechef.com/JUNE221D/submit/DISTGCD
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t,num1,num2;
    cin>>t;
    while(t--)
    {
        cin>>num1>>num2;
        int count=0;
        set<int>s;

        int diff=abs(num1-num2);
        if(diff==1){
            cout<<"1\n";
        }
        else {
            //even
        for(int i=1;i<=sqrt(diff);i++)
        {
            if(diff%i==0)
            {
                s.insert(i);
                s.insert((diff/i));

            }
        }
         
         cout<<"Number of factors :-"<<s.size()<<endl;

         for(auto i:s)
         {
            cout<<i<<" ";
         }
        }
       
    }
}