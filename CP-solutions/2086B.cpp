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
  ll n,k,x;cin>>n>>k>>x;
  readvll(a,n);
  ll asum=accumulate(all(a),0ll);
  vector<ll> pref(n+1,0ll);
  loop(1,n+1){
  	pref[i] = pref[i-1] + a[i-1];
  }
  
  vector<ll> b(n,0);
  ll ans=0;
  loop(0,n){
  	ll csum = k*asum - x - pref[i];
  	if(csum < 0ll) continue;
  	//debug(min(k,1 + csum/asum));
  	ans += min(k,1ll + (ll)csum/asum);
  }
  // for (int i = 0; i < n; ++i)
  // {

  // 	ll csum=max(0ll,asum*k -x - pref[i]);
  // 	debug(csum);
  // 	b[i] = csum/asum;
  // }
  // debug(b);
  // ll ans=0;
  // loop(0,n){
  	
  // 	ans += min(k,1 + b[i]);
  // }
  if(asum*k < x){cout<<0<<endl;return;}
  cout<<ans<<endl;return;

  // loop(0,n){ b.push_back(a[i]);}
  // loop(0,n){ b.push_back(a[i]);}
  
  // vector<ll> pref(2*n,0);
  // pref[0] = b[0];
  // loop(1,2*n){
  // 	pref[i] += pref[i-1] + b[i];
  // }
  // debug(pref);

  
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