#include<bits/stdc++.h>


using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
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
  ll n,k;cin>>n>>k;
  readvll(a,n);
  vector<ll> dup=a;
  unordered_map<ll,ll> mp;
  ll idx=0;
  for(ll &i: a){
  	mp[i]=idx;idx++;
  }
  sort(allr(a));
  debug(dup);
  ll ans=0;
  if(k==1){
  	loop(0,n){
  		if(i!=0 and i!=n-1){
  			ans=max(ans,dup[i] + max(dup[0],dup[n-1]));
  		}
  		else{
  			ans=max(ans,dup[0]+dup[n-1]);
  		}
  	}
  }
  else{
  	//debug(a);
  	ans += accumulate(a.begin(),a.begin()+k,0ll) ;
  	ans += a[k];
  	// if(abs(mp[a[0]]-mp[a[1]])==1)
  	// ll last=0;
  	// if(a[0] >= a[k-1] or a[n-1]>=a[k-1]) {debug("hi");ans+=a[k];}
  	// else ans +=max(a[0],a[n-1]);
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







// if(mp[a[0]]==0){
//   		if(mp[a[1]]==1) ans +=a[0]+a[n-1];
//   		else
//   	}