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

void solve() 
{
  ll n;cin>>n;
  vector<ll> v(n);
  vector<ll> odd,even;
  for (ll i = 0; i < n; ++i)
  {
  	cin>>v[i];
  	if(v[i]%2ll) odd.push_back(v[i]);
  	else even.push_back(v[i]);
  }
  debug(even);debug(odd);
  if(odd.size()==0ll or even.size()==0ll){
  	cout<<0<<endl;return;
  }
  sort(all(odd));
  sort(all(even));
  ll ans(0);
  
	ll curr=odd[odd.size()-1];
	for(ll &it: even)
	{
		if(it>curr) {
			ans+=2;
			curr+=it;
		}
		else ans+=1;
		curr+=it;
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