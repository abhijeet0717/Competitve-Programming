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
  readvll(a,n);
  ll ans=0;
  vector<ll> odd,even;
  for(ll &it: a){
  	if(it%2) odd.push_back(it);
  	else even.push_back(it);
  }

  if(even.empty()) {ans=*max_element(all(odd));cout<<ans<<endl;return;}
  if(odd.empty()) {ans=*max_element(all(even));cout<<ans<<endl;return;}
  sort(all(odd));
  ans = odd.back();odd.pop_back();
  reverse(all(odd));
  ll curr=0;
  loop(0,odd.size()) curr+=odd[i]-1;
  ans += curr;
  ans += accumulate(all(even),0ll);
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