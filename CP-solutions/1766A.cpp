
/*
    --> Ankit singh sisodya
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

#define debug(...) 42
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
// #include "algo.h";
#endif

std::mt19937_64 rng{std::chrono::steady_clock::now().time_since_epoch().count()};

void solve()
{
    int n;
    cin >> n;
    vector a(n + 1, 0ll);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a.begin() + 1, a.end());

    map<int, int> occ;
    for (int i = 1; i <= n; ++i)
        occ[a[i]]++;
    vector<int> v;
    for (auto &[x, y] : occ)
        v.push_back(y);
    sort(v.begin(), v.end());
    int ans = 0;
    int curr = v.back();
    debug(v);
    for (int i = v.size() - 1; i >= 0 && curr > 0; --i)
    {
        if (v[i] < curr)
        {
            ans += v[i];
            curr = v[i] - 1;
        }
        else if (v[i] == curr)
        {
            ans += curr;
            curr--;
        }
        else if (v[i] > curr)
        {
            ans += curr;
            curr--;
        }
    }
    cout << ans << "\n";
}

signed main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
