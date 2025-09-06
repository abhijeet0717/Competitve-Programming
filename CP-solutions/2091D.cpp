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

bool f(ll mid,ll n,ll m,ll k){
	ll cnt=0;
	ll temp=(m+1)/(mid+1);
	ll y=max(m-temp,temp*mid);
	cnt += n*y;
	if(cnt>=k) return true;
	else return false;
}

void solve() 
{
  ll n,m,k;
  cin>>n>>m>>k;
  ll l = 1, r = m, ans = 1;
  while(l <= r){
       ll mid = (l + r) / 2;
       if(f(mid,n,m,k)){
           ans = mid;
           r = mid - 1;
       }
       else{
           l = mid + 1;
       }
  }
  cout <<ans<<endl;
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