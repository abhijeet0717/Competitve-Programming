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
vector<bool> is_prime(1e7, true);
vector<ll> primes;

void solve() 
{
  ll n;cin>>n;
  //debug(primes);
  ll ans=0;
  for(ll &it: primes){
  	if(it>n) break;
  	ans += (n)/it;
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
    int n=1e7;

	is_prime[0] = is_prime[1] = false;
	for (ll i = 2; i <= n; i++) {
	    if (is_prime[i] && (long long)i * i <= n) {
	        for (ll j = i * i; j <= n; j += i)
	            is_prime[j] = false;
	    }
	}
	for (ll i = 0; i < is_prime.size(); ++i)
	{
		if(is_prime[i]) primes.push_back(i);
	}
    while(TT--) solve();
    return 0;

}