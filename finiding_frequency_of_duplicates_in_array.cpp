#include<bits/stdc++.h>
using namespace std;

/////To find frequency of each element in array/vector

int main()
{
   vector<int> a={10,20,30,40,20,20,25,25};

   vector<pair<int,int>> pair_of_vec;

   for(int i=0;i<a.size();i++)
   {
       if(a[i]==false)
       {
           continue;
       }
       int count=1;
       for(int j=i+1;j<a.size();j++)
       {
           if(a[j]==false)
           {
               continue;
           }
           else if(a[i]==a[j])
           {
               count++;
               a[j]=false;
               
           }
       }
       pair_of_vec.push_back({a[i],count});
   }

   for(auto i:pair_of_vec)
   {
       cout<<"Freuency of "<<i.first<<"-"<<i.second<<endl;
   }


}