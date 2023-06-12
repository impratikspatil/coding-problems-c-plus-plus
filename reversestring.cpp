#include <bits/stdc++.h>
using namespace std;


//reverse a string using recursion
void rev(string name)
{
    if(name.length()==0)
    {
        return;
    }

    string newstr=name.substr(1);
    rev(newstr);
    cout<<name[0];
}


int main()
{
    string name="pratik";
    rev(name);
}