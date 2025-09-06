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
  string s;cin>>s;
  int n = s.length();
  string ans = ""; int cnt = 0;
  loop(0,n){
  	if(s[i] == 'T') cnt++;
  }
  debug(cnt);
  loop(0,(int)cnt){
  	ans += 'T';
  }
  for(int i = 0; i < n; i++){
  	if(s[i] != 'T') ans += s[i];
  }
  // for(int i = 0 ; i < n-2; i++){
  // 	if(s[i] == 'F' and s[i+1] == 'F' and s[i+2] == 'T') {debug(s,i);swap(s[i+1],s[i+2]);}
  // 	else if(s[i] == 'N' and s[i+1] == 'T' and s[i+2] == 'T') {debug(i);swap(s[i+1],s[i]);}
  // }
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