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
const int MOD = 998244353;

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
  int n;cin>>n;
  readv(a,n);
  int ans=0,cnt1=0,po2=0;
  loop(0,n){
    if(a[i]==1) cnt1++;
    else if(a[i]==2) po2 =(po2*2 +  cnt1)%MOD;
    else ans = (ans + po2) %MOD;
  }
  cout<<ans<<endl;return;
  // int sz=count(all(a),1);
  // vector<int> apref(sz,0);
  // int apt=0,ans=0;
  // loop(1,n-1){
  // 	if(a[i]==2) apref[apt]++;
  // 	else if(a[i]==1){
  // 		apt++;
  // 	}
  // 	else {
  // 		loopj(0,apt+1){
  // 			ans += (apref[j]*(apref[j]+1)%MOD)/2;
  // 		}
  // 	}
  // }
  // debug(apref);
  // cout<<ans<<endl;return;
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