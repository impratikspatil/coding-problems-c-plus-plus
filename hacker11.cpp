#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
const int mod = 1e9 + 7;
const double pie = 3.14159265;
using ll = long long;
#define fast_io              \
    ios::sync_with_stdio(0); \
    cin.tie(NULL);           \
    cout.tie(NULL);
#define all(v) v.begin(), v.end()
#define allg(v) v.rbegin(), v.rend()
#define pb push_back
#define eb emplace_back
#define po pop_back
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define yes cout << "YES" \
                 << "\n"
#define no cout << "NO" \
                << "\n"
#define yesr           \
    {                  \
        cout << "YES"; \
        return;        \
    }
#define nor           \
    {                 \
        cout << "NO"; \
        return;       \
    }
#define inpvec        \
    ll n;             \
    cin >> n;         \
    vector<ll> v(n);  \
    for (auto &i : v) \
        cin >> i;
#define inpstr(n, s) \
    ll n;            \
    cin >> n;        \
    string s;        \
    cin >> s;
bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
ll largePow(ll a, ll b)
{
    ll anss = 1;
    while (b > 0)
    {
        if ((b & 1) != 0) // checking if b is odd or even
        {
            // this condition is for if b is ODD
            anss = (anss * (a % mod)) % mod;
        }
        // if b is EVEN
        a = (a % mod) * (a % mod);
        b = b >> 1; // just doing half of b, we can write b/2 also
    }
    return anss;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
vector<bool> seiveOfErasthones(ll n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i * i <= n; i++)
    {
        for (ll j = 2 * i; j <= n; j += i)
        {
            isPrime[j] = false;
        }
    }
    return isPrime;
}
ll Mex(unordered_set<ll> &st)
{
    ll mex = 0;

    while (st.find(mex) != st.end())
    {
        mex++;
    }
    return mex;
}
ll getIthbit(ll n, ll i)
{
    ll mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}
void setIthBit(ll &n, ll i)
{
    ll mask = (1 << i);
    n = (n | mask);
}
bool isPalindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++)
    {
        if (S[i] != S[S.length() - i - 1])
        {
            return false;
        }
    }
    return true;
}
bool areDistinct(vector<ll> arr)
{
    ll n = arr.size();
    unordered_set<int> s;
    for (ll i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    return (s.size() == arr.size());
}
ll highestPowerof2(unsigned int n)
{
    // Invalid input
    if (n < 1)
        return 0;

    ll res = 1;

    // Try all powers starting from 2^1
    for (ll i = 0; i < 8 * sizeof(unsigned int); i++)
    {
        ll curr = 1 << i;

        // If current power is more than n, break
        if (curr > n)
            break;

        res = curr;
    }

    return res;
}

//********************************************************************************

int main()
{
    fast_io;
#ifndef ONLINE_JUDGE
    freopen("input.txt",
            "r", stdin);
    freopen("output.txt",
            "w", stdout);
#endif
    ll tc;
    cin >> tc;
    for (ll kk = 1; kk <= tc; kk++)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        vector<ll> b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];
        deque<ll> dq, dq2;
        for (auto &it : a)
        {
            dq.pb(it);
        }
        for (auto &it : b)
        {
            dq2.pb(it);
        }
        if (k == 0)
        {
            if (a == b)
                cout << "Case #" << kk << ": "
                     << "YES" << nline;
            else
                cout << "Case #" << kk << ": "
                     << "NO" << nline;
        }
        else if (n == 2)
        {
            if (a[0] == b[0])
                cout << "Case #" << kk << ": "
                     << "YES" << nline;
            else
            {
                if (a == b)
                {
                    if (k % 2)
                        cout << "Case #" << kk << ": "
                             << "NO" << nline;
                    else
                        cout << "Case #" << kk << ": "
                             << "YES" << nline;
                }
                else
                {
                    if (k % 2)
                        cout << "Case #" << kk << ": "
                             << "YES" << nline;
                    else
                        cout << "Case #" << kk << ": "
                             << "NO" << nline;
                }
            }
        }
        else if (count(all(b), b[0]) == n)
            cout << "Case #" << kk << ": "
                 << "YES" << nline;
        else
        {
            ll cnt = count(all(b), b[0]);
            ll flag = 0;
            rep(i, 0, n)
            {
                if (cnt)
                {
                    ll frn = dq[0];
                    if (frn == b[0])
                    {
                        if (dq == dq2)
                        {
                            flag = 1;
                            break;
                        }
                        cnt--;
                        ll ps = dq[0];
                        dq.pop_front();
                        dq.push_back(ps);
                    }
                    else
                    {
                        ll ps = dq[0];
                        dq.pop_front();
                        dq.push_back(ps);
                    }
                }
            }
            if (flag) cout << "Case #" << kk << ": "
                 << "YES" << nline;
            else cout << "Case #" << kk << ": "
                 << "NO" << nline;
        }
        // else
        // {
        //     while (dq[0] != b[0])
        //     {
        //         ll fr = dq[0];
        //         dq.pop_front();
        //         dq.push_back(fr);
        //     }
        //     a.clear();
        //     for (auto &it : dq)
        //         a.pb(it);
        //     if (a == b)
        //     {
        //         cout << "Case #" << kk << ": "
        //              << "YES" << nline;
        //     }
        //     else
        //     {
        //         cout << "Case #" << kk << ": "
        //              << "NO" << nline;
        //     }
        // }
    }
}