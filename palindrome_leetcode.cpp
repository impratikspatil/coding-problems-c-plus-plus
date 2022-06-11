#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>vec;
        int flag=0;
        while(x!=0){
            int rem;
            rem=x%10;
            vec.push_back(rem);
            x=x/10;
        }

        // for(auto i:vec){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        
        int m=vec.size();
        for(int i=0;i<=(m/2)-1;i++)
        {
            if(vec[i]==vec[m-1-i]){
                flag=1;
            }
            else{
                flag=0;
                return false;
            }
        }
        
        if(flag==1)
        {
            return true;
        }
        return 0;
        
    }
};

int main()
{
    int num;
    cin>>num;
    Solution obj;
    bool a=obj.isPalindrome(num);
    if(a){
        cout<<"IT IS PALINDROME\n";
    }
    else{
        cout<<"IT IS NOT PALINDROME\n";
    }

}