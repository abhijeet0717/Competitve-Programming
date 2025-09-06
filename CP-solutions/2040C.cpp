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

void f(ll i,ll l,ll r,ll k,vector<ll>& ans)
{
	if(l==r){
		ans[l]=i;
		return;
	}
	ll sze=r-l-1;
	if (sze<60 and (1LL<<sze)<k )
	{
		ans[r]=i;
		f(i+1,l,r-1,k-(1LL<<sze),ans);
	}
	else{
		ans[l]=i;
		f(i+1,l+1,r,k,ans);

	}
}

void solve() 
{
  ll n,k;cin>>n>>k;

  if (n-1<60 and (1LL<< (n-1))<k )
  {
  	cout<<"-1\n";return;
  }
  vector<ll> ans(n);
  f(1,0,n-1,k,ans);

  for(auto it: ans) 
  	cout<<it<<" ";
  cout<<endl;return;
  
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