
// to find both numbers are equal or not

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int b=10;
    int c=4;

    if((a ^ b)==0)
    {
        cout<<"both a and b are same\n";
    }
    else{
        cout<<"both a and b are different\n";
    }

    if(!(a^c))
   {
        cout<<"both a and c are same\n";
    }
    else{
        cout<<"both a and c are different\n";
    }
}