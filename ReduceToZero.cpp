//codechef link - https://www.codechef.com/JUNE221D/submit/RED0
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    long long num1,num2;

    while(t--)
    {
        cin>>num1>>num2;
        if(num1==0 && num2==0)
        {
            cout<<"0"<<endl;
        }
       
        else if(num1==0 || num2==0)
        {
            cout<<"-1"<<endl;
        }
        else if(!(num1^num2))
        {
            cout<<num1<<endl;
        }
        else{

            
            if(num1>num2){
                long long count=0;

               
                while(num2<=num1)
                {
                    num2=num2<<1;
                  
                    count++;
                }
                count--;
                num2=num2>>1;
                // cout<<"count = "<<count<<endl;
                // cout<<"num1 = "<<num1<<" and "<<" num2 = "<<num2<<endl;
                

                if(!(num1^num2))
                {
                    cout<<count+num1<<endl;
                }
                else{
                      cout<<count+num1+1<<endl;
                }


           

        }
        else{
             long long count=0;

                while(num1<=num2)
                {
                    num1=num1<<1;
                    count++;
                }
                 count--;
                num1=num1>>1;
                
                //  cout<<"count = "<<count<<endl;
                // cout<<"num1 = "<<num1<<" and "<<" num2 = "<<num2<<endl;
                

                if(num2==num1)
                {
                    cout<<count+num2<<endl;
                }
                else{
                      cout<<count+num2+1<<endl;
                }

        }

        
        
        
    }

}

}
