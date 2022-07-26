#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
   int a=0;
   int b=1;
   int c;
   
   //a b c
   //0 1 1 2 3 5 8 13 21 34 55....so on 

   //here we are continously updating a,b,c so that we will get next value;
    cout<<a<<" "<<b<<" ";
   for(int i=0;i<8;i++)
   {

    c=a+b;
    a=b;
    b=c;
    cout<<c<<" ";


   }
}
