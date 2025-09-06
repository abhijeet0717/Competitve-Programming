#include<bits/stdc++.h>
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

const int MOD = 998244353;

#ifndef ONLINE_JUDGE
  #include "debug.h" 
#else
  #define debug(x...)
#endif

vector<int> pow2(1, 1);
void pre_pow2(int n) {
    while ((int)pow2.size() <= n)
        pow2.push_back((2LL * pow2.back()) % MOD);
}

void solve() {
    int n; cin>>n;
    vector<int> p(n), q(n);
    loop(0, n) cin>>p[i];
    loop(0, n) cin>>q[i];

    pre_pow2(2*n);

    vector<int> powp(n), powq(n);
    for (int i = 0; i < n; i++) {
        powp[i] = pow2[p[i]];
        powq[i] = pow2[q[i]];
    }

    vector<int> ans(n);
    for (int i = 0; i < n; ++i) {
        int max_val = 0;
        for (int j = 0; j <= i; ++j) {
            int val = (powp[j] + powq[i - j]) % MOD;
            max_val = max(max_val, val);
        }
        ans[i] = max_val;
    }

    print(ans);
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
