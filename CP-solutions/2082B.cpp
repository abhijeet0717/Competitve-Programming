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
  ll x,n,m;cin>>x>>n>>m;
  ll x1=x,n1=n,m1=m;
  ll minm=x,maxm=0;
  while(x>0 and (n>0 or m>0)){
  	if(x%2!=0){
  		if(n>0) {
  			x=x/2;--n;
  			minm=min(minm,x);
  		}
  		else{
  			x=x/2+1;--m;
  			minm=min(minm,x);
  		}
  	}
  	else{
  		if(m>0){
  			x=x/2+1;--m;
  			minm=min(minm,x);
  		}
  		else{
  			x=x/2;--n;
  			minm=min(minm,x);
  		}
  	}
  }
  cout<<minm<<" ";
  n=n1,m=m1,x=x1;
  while(x>0 and (n>0 or m>0)){
  	if(x%2!=0){
  		if(m>0){
  			x=x/2+1;--m;
  			maxm=max(maxm,x);
  		}
  		else{
  			x=x/2;--n;
  			maxm=max(maxm,x);
  		}
  	}
  	else
  	{
  		if(n>0)
  		{
  			x=x/2;n--;
  			maxm=max(maxm,x);
  		}
  		else{
  			x=x/2+1;m--;
  			maxm=max(maxm,x);
  		}
  	}
  }
  maxm=max(x,maxm);
  cout<<maxm<<endl;return;
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