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
#define loop(x,n) for (int i = x; i < n; i++)
#define loopj(x,n) for (int j = x; j < (n); j++)
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
  int n;cin>>n;
  readv(a,n);
  int ans = n;
  loop(0,n-1){
  	if(abs(a[i]-a[i+1])<=1) {cout<<0<<endl;return;}
  }
  loop(0,n-1){
  	int minm = min(a[i],a[i+1]), maxm = max(a[i],a[i+1]);
  	if(i > 1 and a[i-1]<maxm+1 and a[i-1]>minm-1){cout<<1<<endl;return;}
  	if(i < n-1 and a[i+2]<maxm+1 and a[i+2]>minm+1){cout<<1<<endl;return;}
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