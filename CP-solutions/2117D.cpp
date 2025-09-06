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

#ifndef ONLINE_JUDGE
  #include "debug.h" 
#else
  #define debug(x...)
#endif

void solve() 
{
    int n; cin>>n;
    readvll(a, n);

    ll a1 = a[0], an = a[n-1];
    ll u = a1 * n - an;
    ll d = 1LL * (n * n - 1);

    if (d == 0 or u%d != 0) {
        no;
        return;
    }

    ll y = u / d;
    ll x = a1 - y * n;

    if (x < 0 or y < 0) {
        no;
        return;
    }

    loop(1, n + 1) {
        ll req = x*i + y*(n - i + 1);
        if (a[i - 1] != req) {
            no;return;
        }
    }
    yes;
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
