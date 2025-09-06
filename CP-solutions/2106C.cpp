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
  readv(b,n);
  bool found = false;
  int sum = INT_MIN;
  int ans = 1;
  loop(0,n){
  	if(b[i] != -1){
  		if(found == true and a[i]+b[i]!=sum){
  			cout<<0<<endl;return;
  		}
  		if(!found){
  			found = true;
  			sum = a[i] + b[i];
  		}
  	}
  }
  if(found){
  	loop(0,n){
  		if((sum - a[i] > k) or (a[i]>sum)){cout<<0<<endl;return;}
  	}
  	{cout<<1<<endl;return;}
  }
  // if no sum is fixed
  int minm = *min_element(all(a));
  int maxm = *max_element(all(a));
  ans = max(0, minm+k - maxm + 1);
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