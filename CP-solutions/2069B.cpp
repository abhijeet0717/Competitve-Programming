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
  int n,m;cin>>n>>m;
  vector<vector<int>> a(n);
  loop(0,n){
  	readv(x,m);
  	a[i]=x;
  }
  // debug(a);
  map<int, int> mp;
  loop(0,n){
  	loopj(0,m) mp[a[i][j]]=-1;
  }
  loop(0,n){
  	loopj(0,m-1){
  		if(a[i][j]==a[i][j+1]) mp[a[i][j]]=2;
  	}
  }
  loop(0,n-1){
  	loopj(0,m){
  		if(a[i][j]==a[i+1][j]) mp[a[i][j]]=2;
  	}
  }
  debug(mp);
  int cnt1=0,cnt2=0;
  for(auto it: mp){
  	if(it.second==2) cnt2++;
  	else cnt1++;
  }
  // debug(cnt1,cnt2);
  int ans=0;
  if(cnt2>0){
  	ans=(cnt2-1)*2+cnt1;
  }
  else if(cnt1>1) {
  	ans=cnt1-1;
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