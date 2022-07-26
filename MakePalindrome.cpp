
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

 bool palindrome_check( string s)
 {
    //to check palindrome or not
    string check=s; //01
   int k=s.size()-1;
    for(auto i=0;i<(check.length()/2);i++)
    {
        char temp;
        temp=check[i];
        check[i]=check[k-i];
        check[k-i]=temp;

    }
   

    if(check==s)
    {
       
        return true;
    }
    else{
        
        return false;
    }


 }

 void display(string a)
 {
    for(int i=0;i<a.length();i++)
    {
        cout<<a[i];
    }
   
 }


int main()
{
    
    int t;
    cin>>t;
    int n;
    
    while(t--)
    {
      cin>>n;
      string arr;
      cin>>arr;

      bool c=palindrome_check(arr);
      if(c==true)
      {
        display(arr);
        cout<<endl;
       
      }

            for(auto i=(arr.begin())+1;i!=arr.end();i++)
        {
            // cout<<"arr ka i ="<<*i<<endl;
            string cp=arr;
            arr.erase(i);
            if(palindrome_check(arr))
            {
                display(arr);
                 cout<<endl;
               
            }
            else{
                arr=cp;
                // cout<<arr<<endl;
                
            }


        }



   
        
    }

}



