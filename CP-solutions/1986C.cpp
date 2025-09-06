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
  read(n);read(m);
  string s;cin>>s;
  // map<int, int> mp;
  set<int> sett;
  loop(0,m){
  	int x;cin>>x;
  	sett.insert(x);
  }
  string c;cin>>c;
  vector<char> v;
  for (int i = 0; i < c.length(); i++)
  {
  	v.push_back(c[i]);
  }
  debug(sett);
  sort(all(v));
  int pt=0;
  for(auto &it: sett){
  	s[it-1]=v[pt];
  	pt++;
  	// if(it.second==1){
  	// 	s[it.first-1]=v[pt];
  	// }
  }
  loop(0,n){
  	cout<<s[i];
  }
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