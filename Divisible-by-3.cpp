//codechef link -  https://www.codechef.com/submit-v2/MODULO3


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long testcases;
    long long B,A;
    cin>>testcases;

    while(testcases--)
    {
        cin>>A>>B;
        int count=0;

             if((A%3==0) || (B%3==0))
             {
                 cout<<"0\n";
             }
             else if(A==B)
             {
                 cout<<"1\n";
             }
             else if((A-B)%3==0){
                cout<<"1\n";
             
             }
             else{
                 cout<<"2\n";
             }
       
    }
}
