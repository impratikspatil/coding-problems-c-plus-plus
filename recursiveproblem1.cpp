#include<bits/stdc++.h>
using namespace std;


void check(string name)
{

    string newstr;
    if(name.length()==0)
    {
        return ;
    }

    if(name[0]=='r' & name[1]=='a')
    {
       
        name[0]='s';
        name[1]='k';
        cout<<name[0]<<name[1];
        newstr=name.substr(2);
    }
    else{
          cout<<name[0];
          newstr=name.substr(1);
    }
    check(newstr);

}


int main()
{
    string name="pratrakraik";
    check(name);

}