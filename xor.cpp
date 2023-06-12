#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

ll t;
    cin>>t;
     int A, B, C;
    while(t--)
    {
            cin >> A >> B >> C;

    int l = 0, r = 1e9; // assuming X is in the range [0, 10^9]
    int ans = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if ((A^mid) < (B^mid) && (B^mid) < (C^mid)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    if (ans != -1) {
        cout << "X = " << ans << endl;
    }
    else {
        cout << "No such X exists." << endl;
    }
    }
   

    return 0;
}