//codechef question
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    int total_seats,interested_seats;
    cin>>t;

    while(t--)
    {
        cin>>total_seats>>interested_seats;
        if(total_seats>=interested_seats)
        {
            cout<<'0'<<endl;

        }
        else{
            cout<<interested_seats-total_seats<<endl;
        }
        
    }
}
