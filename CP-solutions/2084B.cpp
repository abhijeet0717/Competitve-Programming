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

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

void solve() 
{
  ll n;cin>>n;
  readvll(a,n);
  ll minm=*min_element(all(a));
  ll min_cnt=0;
  vector<ll> v,v2;
  loop(0,n){
  	if(a[i] == minm) min_cnt++;
  	else if(a[i]%minm==0ll) v.push_back(a[i]);
  	else v2.push_back(a[i]);
  }
  // if multiple minms
  if(min_cnt>1){yes;return;}
  debug(v);
  ll pgcd_;
  if(!v2.empty()){
  	pgcd_=v2[0];
	  loop(1,v2.size()){
	  	pgcd_=__gcd(pgcd_,v2[i]);
	  }
	  if(pgcd_ == minm){yes;return;}
	}
  if(v.size()){
  ll pgcd=v[0];
  loop(1,v.size()){
  	pgcd=__gcd(pgcd,v[i]);
  }
  if(pgcd == minm){yes;return;}
}
  no;return;
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