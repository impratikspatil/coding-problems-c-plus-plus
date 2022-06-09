#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>a;

  for(int i=0;(n)!=0;i++)
  {
      int rem=n%10;
     a.push_back(rem);
     n=n/10;


  }

///values pushed into the array
    for(int i=0;i<a.size();i++)
  {
      cout<<a[i]<<" ";
  }
  cout<<endl;
  
  for(int i=0;i<a.size();i++)
  {
      if(a[(a.size())-1]==9)
      {
         
         continue;
         
      }

      else if(a[i]>4)
      {
          a[i]=(9-a[i]);
      }

  }

  
  cout<<"size of vector ="<<a.size()<<endl;
  cout<<"last element = "<<a[a.size()-1]<<endl;
  
  for(int i=a.size()-1;i>=0;i--)
  {
      cout<<a[i];
  }

    


}

