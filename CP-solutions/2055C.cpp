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
#define loopx(y,x,n) for (ll y = x; j < (n); j++)
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
  string s;cin>>s;
  vector<vector<ll>> a(n,vector<ll>(m,0));
  loop(0,n){
  	loopx(j,0,m){
  		cin>>a[i][j];
  	}
  }
  ll i=0,j=0,idx=0;
  while(idx != s.size()){
  	if(s[idx]=='D'){
  		ll c_sum=0;
  		for(ll x=0;x<m;x++) c_sum += a[i][x];
  		//debug(c_sum);
  		a[i][j] = (-1)*(c_sum);
  		i++;
  	}
  	if(s[idx]=='R'){
  		ll c_sum=0;
  		for(ll x=0;x<n;x++) c_sum += a[x][j];
  		a[i][j] = (-1)*(c_sum);
  		j++;
  	}
  	idx++;
  }
  ll c_sum=0;
  for(ll x=0;x<n;x++) c_sum += a[x][m-1];
  a[n-1][m-1] = (-1)*(c_sum);
  // debug(a);
  loop(0,n){
  	loopx(j,0,m){
  		cout<<a[i][j]<<" ";
  	}
  	cout<<endl;
  }
  cout<<endl;


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