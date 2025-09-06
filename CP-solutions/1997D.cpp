#include<bits/stdc++.h>


using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define read(x)     int x;cin>>x;
#define readll(x)   ll x;cin>>x;
#define readv(v,n)  vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define readvll(v,n)  vector<ll> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
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

bool dfs(ll v, ll val, vector<ll>& adj,vector<ll>& a){
	if(adj[v].empty() and a[v]<val) return false;

	if(!v) val=max(0ll,val=a[v]);
	else if(a[v]<val) val=min(INT_MAX,val+val-a[v]);

	for(ll u: adj[v]){
		if(!dfs(u,val,adj,a)) return false;
	}
	return true;
}

void solve() 
{
  ll n;cin>>n;
  vector<ll> a(n+1);
  for (int i = 0; i < n; ++i)
  {
  	cin>>a[i];
  }
  vector<ll> adj(n+1,0);
  loop(1,n){
  	ll x;cin>>x;
  	adj[--x].push_back(i);
  }
  ll low=0,high=1e9+7;
  while(high - low>1){
  	ll mid=(high+low)/2;
  	if(dfs(0ll,mid,adj,a)) low=mid;
  	else high=mid;
  }
  cout<<low<<endl;
  for (int i = 0; i < n+1; i++) adj[i].clear();
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