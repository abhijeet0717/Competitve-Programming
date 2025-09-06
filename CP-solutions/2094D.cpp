#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define read(x) \
    int x;      \
    cin >> x;
#define readll(x) \
    ll x;         \
    cin >> x;
#define readv(v, n)             \
    vector<int> v(n);           \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define readvll(v, n)           \
    vector<ll> v(n);            \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define loop(x, n) for (ll i = x; i < n; i++)
#define loopj(x, n) for (ll j = x; j < (n); j++)
#define rloop(n, x) for (ll i = n - 1; i >= x; i--)
#define print(arr)         \
    for (auto &it : arr)   \
    {                      \
        cout << it << " "; \
    }                      \
    cout << endl;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x...)
#endif

void solve()
{
    string p, s;
    cin >> p >> s;
    int i = 0, j = 0, n = p.length(), m = s.length();
    int p_cnt = 0, s_cnt = 0;
    while (i < n && j < m)
    {
        char c = p[i];
        while (i < n and p[i] == c)
        {
            i++;
            p_cnt++;
        }

        while (j < m and s[i] == c)
        {
            j++;
            s_cnt++;
        }
        if (s_cnt < p_cnt or s_cnt > 2 * p_cnt)
        {
            no;
            return;
        }
    }
    if (i == n and j == m)
    {
        yes;
        return;
    }
    no;
    return;
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    int TT;
    TT = 1;
    cin >> TT;
    while (TT--)
        solve();
    return 0;
}

