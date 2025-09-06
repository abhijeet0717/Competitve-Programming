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
  int x;cin>>x;
  int setb=__builtin_popcount(x);
  int cnt =0;
  for (int i = 1; i <= x; i = i<<1){
  	if ((i & x) == 0) cnt++; 
  }
  int ans=0;
  if(cnt>0 and setb>1){
  	//debug(setb,cnt);
  	for(int i=0;i<setb+cnt;i++){
  		//debug(i ,x>>i , x>>i&1);
  		if(i==setb+cnt-1 or x>>i&1 == 0) {
  			ans +=(1<<i);
  			//debug(i ,1<<i);
  		}
  		if(!(x>>i&1 )) {
  			ans+=(1<<i);debug(x>>i&1);
  		}
  	}
  	//cout<<ans<<endl;return;
  	cout<<min(ans,ans^x)<<endl;return;
  }
  cout<<-1<<endl;return;
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