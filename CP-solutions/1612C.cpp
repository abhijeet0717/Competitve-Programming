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
  ll x,y;cin>>x>>y;
  ll low=1,high=2*x-1,ans=high;
  while(high>=low){
  	ll mid=(high+low)/2;
  	bool check=false;
  	if(mid>=x){
  		check=((x*(x+1))/2 + (x*(x-1))/2 -((2*x-1-mid)*(2*x-mid))/2 )>=y;
  	}
  	else{
  		check=(mid*(mid+1))/2>=y;
  	}
  	if(check){
  		ans=mid;
  		high=mid-1;
  	}
  	else{
  		low=mid+1;
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