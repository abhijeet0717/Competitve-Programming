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

void dfs(ll idx,ll q,vector<ll>& p,vector<ll>& op_query){
	debug(p);
	if(p[idx] == 0) return;
	if(p[idx] == idx){
		p[idx] =0;
		op_query[q]++;
	}
	else{
		int x=p[idx];p[idx] = 0;
		op_query[q]++;
		dfs(x,q,p,op_query);
	}
	return ;
}

void solve() 
{
  ll n;cin>>n;
  vector<ll> p(n+1);
  loop(1,n+1) cin>>p[i];
  readvll(d,n);
  // loop(0,n){
  // 	p[i]--;d[i]--;
  // }
  vector<ll> op_query(n,0);
  loop(0,n){
  	if(i>0) op_query[i] += op_query[i-1];
  	if(p[d[i]] == 0) continue;
  	dfs(d[i],i,p,op_query);
  }
  debug(op_query);
  print(op_query);
  return;
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