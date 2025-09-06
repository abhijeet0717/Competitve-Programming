#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define read(x)     int x;cin>>x;
#define readll(x)   ll x;cin>>x;
#define readv(v,n)  vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define readvll(v,n)  vector<ll> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define loop(x,n) for (ll i = x; i < n; i++)
#define loopj(x,n) for (ll j = x; j < (n); j++)
#define rloop(n,x) for (ll i = n-1; i>=x; i--)
#define print(arr) for(auto &it:arr){cout<<it<<" ";}cout<<endl;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
  #include "debug.h"
#else
  #define debug(x...)
#endif

void solve() {
    read(n);
    readv(a, n);

    int G = a[0];
    loop(1, n) G = __gcd(G, a[i]);

    int countG = count(all(a), G);
    if (countG > 0) {
        cout << (n - countG) << '\n';
        return;
    }

    int INF = 1e9;
    vector<int> dist(5001, INF), seen(5001, 0);
    queue<int> q;

    for (int num : a) {
        if (!seen[num]) {
            seen[num] = 1;
            dist[num] = 0;
            q.push(num);
        }
    }

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : a) {
            int g = __gcd(u, v);
            if (dist[g] > dist[u] + 1) {
                dist[g] = dist[u] + 1;
                q.push(g);
            }
        }
    }

    cout <<(dist[G] + n - 1)<<endl;
}

signed main() {
#ifndef ONLINE_JUDGE
   freopen("Error.txt", "w", stderr);
#endif
   fastio();
   int TT;
   cin >> TT;
   while (TT--) solve();
   return 0;
}
