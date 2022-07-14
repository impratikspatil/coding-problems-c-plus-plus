#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    int N;

    while(t--)
    {
        cin>>N;
        char arr[N];
        int flag=0;
        for(auto i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        // int rem=N%3;
        // int check=N-rem;

        if(N==1)
        {
            cout<<"YES"<<endl;
        }
        else if(N==2)
        {
            if(arr[0]==arr[1])
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
        else if(N==3)
        {
          if(arr[0]==arr[1])
          {
            cout<<"YES"<<endl;
          }
          else{
                cout<<"NO"<<endl;
            }

        }
        else if(N>3)
        {
            
            if(N%3==0)  //3 6 9 
            {
                for( int i=0;i<N;i=i+3)
                  {
                        if(arr[i]==arr[i+1]!=arr[i+2])
                        {
                            flag=1;
                        }
                        else{
                            flag=0;
                            break;
                        }

                  } 
                  if(flag==1)
                  {
                     cout<<"YES"<<endl;
                  }
                  else{
                    cout<<"NO"<<endl;
                  }

            }
            else if(N%2==0){ //2 4 8 10  
                 for(int i=0;i<N;i=i+(N/2))
                 {
                    if(arr[i]==arr[0])
                    {
                        flag=1;
                    }
                    else{
                        flag=0;
                        break;
                    }
                 }
                 if(flag==1)
                  {
                     cout<<"YES"<<endl;
                  }
                  else{
                    cout<<"NO"<<endl;
                  }
                 

            }
            else if(N%3==2)
            {


            }

            //aaaab
            
           
          

        }

        
                          
        

    }
}

//1--YES                                                 (a)
//2--BOTH SHOULD BE SAME CHARACHTERS                     (aa)
//3--FIRST TWO SHOULD BE SAME AND THIRD CAN BE ANYTHING  (aab)
//4--FIRST TWO AND LAST TWO SHOULD BE SAME               (zzbb)  aabaab
//5--first two must be same and third fourth should be same and last can be anything  (aabbcc)
//6--(aabbcc)  or (aabaab)  aacaac
//7--(aabaabb) or (aabbccd)  aacaacd
//8--(aabaabba) or (aabbaabb)
 
 
//char +string copy