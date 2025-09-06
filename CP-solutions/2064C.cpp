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
  ll n;cin>>n;
  readvll(a,n);
  vector<ll> prefix(n,0),suffix(n,0);

  if(a[n-1]<0) suffix[n-1]+=abs(a[n-1]);
  rloop(n-1,0){
  	if(a[i]<0){
  		suffix[i]+=abs(a[i]);
  	}
  	suffix[i]+=suffix[i+1];
  }

  if(a[0]>0) prefix[0]=a[0];
  loop(1,n){
  	if(a[i]>0){
  		prefix[i]+=a[i];
  	}
  	prefix[i]+=prefix[i-1];
  }
  //reverse(all(prefix));
  // reverse(all(suffix));
  debug(prefix);debug(suffix);
  ll ans=0;
  loop(0,n){
  	ll cprefix=prefix[i];
  	if(i<n-1) cprefix+=suffix[i+1];
  	ll csuffix=suffix[i];
  	if(i>0) csuffix += prefix[i-1];
  	ll curr=max(csuffix,cprefix);
  	ans= max(ans,curr);
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