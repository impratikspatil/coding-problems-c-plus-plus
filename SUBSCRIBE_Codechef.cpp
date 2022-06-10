// codechef link - https://www.codechef.com/JUNE221D/problems/SUBSCRIBE_

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int cost_per_sub;
    float no_of_friends;
    cin>>t;

    while(t--)
    {
        cin>>no_of_friends>>cost_per_sub;

        int no_of_sub_req=ceil(no_of_friends/6);
        // here ceil function will give you upper value in int form . 
        //ex ceil(1.2)=2; ceil(1.6)=2

        cout<<(no_of_sub_req*cost_per_sub)<<endl;

    }
}