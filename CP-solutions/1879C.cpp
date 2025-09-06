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
  string s;cin>>s;
  vector<int> v;
  ll n=s.length();
  ll curr=1,a(1),b(1),prev(0);
  for (int i = 1; i < n; i++)
  {
  	if(s[i]!=s[i-1]) {
  		a++;
  		v.push_back(curr);
  		curr=1;
  	}
  	else{
  		curr++;
  	}
  }
  if(curr!=1) v.push_back(curr);
  debug(v);
  for (int i = 0; i <v.size(); i++)
  {
  	b=(b*v[i])%998244353;
  }
  for (int i = 1; i <=(n-a); i++)
  {
  	b=(b*i)%998244353;
  }
  cout<<n-a<<" "<<b<<endl;return;
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