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
  int n;cin>>n;
  vector<int> p(n+1);
  for(int i=1;i<=n;i++){
  	cin>>p[i];
  }
  string s;cin>>s;
  s+="0";
  vector<bool> vis(n+1,false);
  vector<int> ans(n+1),pos;

  for (int i = 1; i <=n; i++)
  {
  	int cnt=0,it=i;
  	pos.clear();
  	while(!vis[it]){
  		vis[it]=true;
  		pos.push_back(it);
  		if(s[it]=='0'){
  			cnt++;
  		}
  		it=p[it];
  	}
  	for(auto x: pos){
  		ans[x]=cnt;
  	}
  }
  for(int i=1;i<=n;i++){
  	cout<<ans[i]<<" ";
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