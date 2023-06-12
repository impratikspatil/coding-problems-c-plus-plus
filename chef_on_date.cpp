#include <iostream>
#include <bits/stdc++.h>
#define ll long long
const int MOD = 1000000007;

using namespace std;


ll countSubsets(ll n) {
    
    int cnt = 1;
    
    for (int i = 0; i < n; i++) {
        cnt = (cnt * 2) % MOD;
    }
    
    
    return cnt;
}


void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    ll cnt=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            cnt++;
            
        }
    }
    
    int ans=countSubsets(cnt);
    if(ans==countSubsets(n)){
        ans--;
    }
    
    cout<<ans<<endl;
    // cout<<cnt<<endl;
    
    
    
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}