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
  ll n;cin>>n;
  string s;cin>>s;
  ll dash=0,underscore=0;
  for(char &c: s){
  	if(c=='-') dash++;
  	else underscore++;
  }
  ll ans=0;
  if(dash>=2){
  	ll a=dash/2,b=dash-a;
  	ans += underscore*(a*b);
  }
  // vector<int> pre(n,0),suff(n,0);
  // loop(0,n){
  // 	if(s[i]=='-') {pre[i]++;suff[i]++;}
  // }
  // loop(1,n){
  // 	pre[i] += pre[i-1];
  // }
  // rloop(n-1,0){
  // 	suff[i] += suff[i+1];
  // }
  // debug(pre,suff);
  // int ans=0;
  // loop(0,n){
  // 	if(s[i]=='_'){
  // 		ans += (pre[i]*suff[i]);
  // 	}
  // }
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