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
  ll n,m;cin>>n>>m;
  vector<vector<ll>> arr(n);
  loop(0,n){
  	readvll(x,m);
  	arr[i]=x;
  }
  vector<ll> pre(n,0);
  loop(0,n){
  	pre[i]=accumulate(all(arr[i]),0ll);
  }
  vector<pair<int,int>> rank(n);
  loop(0,n){
  	rank[i]={pre[i],i};
  }
  sort(rank.rbegin(),rank.rend());
  vector<int> final;
  loop(0,n){
  	int idx=rank[i].second;
  	for(auto &it: arr[idx]){
  		final.push_back(it);
  	}
  }
  debug(final);
  ll ans=0,mul=n*m;
  for(int it: final){
  	ans += it*mul;
  	mul--;
  }
  cout<<ans<<endl;return;
}


signed main() {
#ifndef ONLINE_JUDGE
   freopen("Error.txt", "w", stderr);
#endif
   fastio();
   int TT;
    TT=1;
    cin>>TT;
    while(TT--) solve();
    return 0;

}