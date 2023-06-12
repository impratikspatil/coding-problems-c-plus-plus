#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define y cout<<"YES"<<endl
#define n cout<<"NO"<<endl
#define ll long long


int main()
{
    vector<vector<int>>vc={  {1,5,3,7},
      {23,30,34,60},
    {10,20,3,8}
  
    };

    sort(vc.begin(),vc.end());

    for(int i=0;i<3;i++)
    {
        sort(vc[i].begin(),vc[i].end());
    }

    for(auto i:vc)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;

    }

    // int target=34;
    // int row=0;
    // int col=3;
    
    // while(row<3 && col>=0)
    // {
    //     if(vc[row][col]==target)
    //     {
    //         cout<<"found at "<<row<<" "<<col<<endl;
    //         break;
    //     }
    //     else if(target<vc[row][col])
    //     {
    //         col--;
    //     }
    //     else{
    //         row++;
    //     }
    // }
}


// searching in 2d sorted array
