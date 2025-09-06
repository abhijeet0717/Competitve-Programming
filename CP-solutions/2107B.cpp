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
  int n,k;cin>>n>>k;
  readv(a,n);
  int maxm = *max_element(all(a));
  int minm = *min_element(all(a));
  int D  = maxm - minm;
  if(D > k+1){
  	cout<<"Jerry\n";return;
  }
  int cnt = 0;
  loop(0,n){
  	if(a[i]-minm == k+1) cnt++;
  }
  ll sum = accumulate(all(a),0ll);
  debug(D,cnt);
  if(D == k+1){
  	if(cnt > 1) {cout<<"Tom\n";return;}
  }
  
  if( sum%2ll != 0ll ){
  	cout<<"Tom\n";
  }
  else {
  	cout<<"Jerry\n";
  }
  return;
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