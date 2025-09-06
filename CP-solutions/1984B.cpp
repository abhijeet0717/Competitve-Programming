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
  ll n;cin>>n;
  vector<int> v;
  while(n){
  	v.push_back(n%10ll);
  	n/=10ll;
  }
  debug(v);
  int x=v.size();
  for (int i = 0; i < x; i++)
  {
  	if(i!=0){
  		v[i]-=1;
  	}
  	if(i!=x-1) {
  		v[i]+=10;
  		if(v[i]>18){cout<<"NO"<<endl;return;}
    }
  	else{
  		if(v[i]>0){cout<<"NO"<<endl;return;}
  	}
  }
  debug(v);
  cout<<"YES\n";return;
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