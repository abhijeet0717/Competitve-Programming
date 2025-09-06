#include<bits/stdc++.h>


using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define all(x) (x).rbegin(), (x).rend()
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
  //vector<int> a(n);
  vector<pair<int,int>> v;
  loop(0,n){
  	// cin>>a[i];
  	string s;cin>>s;
  	int len=s.size();
  	int x(0),y(0);
  	while(!s.empty()){
  		// x++;
  		if(s.back()=='0') {y++;s.pop_back();}
  		else break;
  	}
  	v.push_back(make_pair(y,len));
  }
  //debug(v);
  sort(all(v));
  int total(0),neg(0);
  for (int i = 0; i < n; i++)
  {
  	if(i%2==0){
  		total+=v[i].second-v[i].first;
  	}
  	else
  		total+=v[i].second;
  }
  debug(total);debug(neg);
  if(total>=m+1){
  	cout<<"Sasha\n";return;
  }
  cout<<"Anna\n";return;
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