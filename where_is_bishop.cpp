
//codeforces link - https://codeforces.com/contest/1692/problem/C

#include <bits/stdc++.h>
 
using namespace std;
#define endl "\n"
 
int main()
{
    int t;
    cin>>t;
    vector<vector<int>>a;
    
    while(t--){
        cout<<endl;
        char x;
        char arr[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>x;
                arr[i][j]=x;
                if(x=='#')
                {
                    a[i].push_back(j+1);
                }
            }
        }



for(int i=0;i<a.size();i++)
{
    if(a[i].size()==2)
    {
        if(a[i][1]-a[i][0]==2)
        {
            cout<<i+2<<" "<<a[i][0]+1<<endl;
        }
        
    }     
}







        // for(int i=1;i<8;i++){
            
        //     for(int j=1;j<8;j++){
        //         if(arr[i][j]=='#'){
        //             if(arr[i-1][j-1]=='#' && arr[i-1][j+1]=='#' && arr[i+1][j-1]=='#' && arr[i+1][j+1]=='#'){
        //                 cout<<i+1<<" "<<j+1<<endl;
        //                 break;
        //             }
        //         }
        //     }
            
        // }
        
        
        
        
        
    }
 
    return 0;
}

