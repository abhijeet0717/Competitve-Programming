#include<bits/stdc++.h>


using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define read(x)     int x;cin>>x;
#define readll(x)   ll x;cin>>x;
#define readv(v,n)  vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define readvll(v,n)  vector<ll> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
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
  read(n);read(k);
  readvll(a,n);
  if(k>2){
  	cout<<0<<endl;return;
  }
  sort(all(a));
  ll ans=a[0];
  for (int i = 0; i < n-1; i++)
  {
  	ans=min(ans,a[i+1]-a[i]);
  }
  if(k==1){
  	cout<<ans<<endl;return;
  }
  for (int i = 0; i < n; i++)
  {
  	for (int j = 0; j < i; j++)
  	{
  		ll curr=a[i]-a[j];
  		ll lb=lower_bound(all(a),curr)-a.begin();
  		if(lb<n) ans=min(ans,a[lb]-curr);
  		if(lb>0) ans=min(ans,curr-a[lb-1]);
  	}
  }
  cout<<ans<<endl;return;
  
}


int main() {
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