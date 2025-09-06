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
  vector<ll> bits(32,0);
  loop(0,n){
  	loopj(0,31){
  		if(a[i]&(1<<j)) bits[j]++;
  	}
  }
  unordered_map<ll, ll> val;
  loop(0,n){
  	if(val[a[i]] != 0) continue;
  	ll diff = 0;
  	loopj(0,32){
  		if(a[i]&(1<<j)){
  			ll a = bits[j] , b = (n-bits[j]);
  			diff = diff -  (1<<j)*a + (1<<j)*b;
  		}
  	}
  	val[a[i]] = diff;
  }
  
  ll ans = 0,maxm_x = -1,maxm_v =LLONG_MIN;
  for(auto &it: val){
      if(it.second > maxm_v){
          maxm_v = it.second;
          maxm_x = it.first;
      }
  }
  loop(0,n){
  	ans += a[i]^maxm_x;
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


/*
long long n; cin >> n;
vector<long long>v(n);
vector<long long>unset(31, 0);
for(int i = 0; i < n; ++i){
    cin >> v[i];
    for(int j = 0; j < 31; ++j){
        if(!(v[i] & (1 << j))){
            unset[j] += 1;
        }
    }
}
unordered_map<long long, long long>mp;
for(int i = 0; i < n; ++i){
    if(mp.count(v[i])) continue;
    long long change = 0;
    for(int j = 0; j < 32; ++j){
        long long ub = unset[j], sb = n - unset[j];
        if((v[i] & (1 << j))){
           change += (1 << j) * ub;
           change -= (1 << j) * sb;
        }
    }
    mp[v[i]] = change;
}
long long mxval = LLONG_MIN, k = -1;
for(auto &ele: mp){
    if(ele.second > mxval){
        mxval = ele.second;
        k = ele.first;
    }
}
long long ans = 0;
for(int i = 0; i < n; ++i){
    ans += (v[i] ^ k);
}
debug(ans);
cout << ans << "\n";
*/