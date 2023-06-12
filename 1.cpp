#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i = 0, j = 1;
    int mx = 1;
    if (n == 1) 
    {
        cout << 1 << "\n";
        return 0;
    }
    int cnt = 1;
    while (j < n)
    {
        if (v[j] >= v[j - 1])
        {
            cnt++;
            mx = max(mx, cnt);
        }
        else
        {
            i = j;
            j = i + 1;
            cnt = 1;
        }
    }
    cout << mx << "\n";
}