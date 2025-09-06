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
  read(n);ll sum(0);
  vector<int> v(n),ans;
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
  	cin>>v[i];
  	sum+=v[i];
  	mp[v[i]]++;
  }
  loop(0,n){
  	sum-=v[i];
  	--mp[v[i]];
  	if(sum%2==0 && mp[sum/2]>0 && (sum/2)<=(int)1e6) ans.push_back(i+1);
  	// loopj(0,n){
  	// 	if(i!=j){
  	// 	debug(i);debug(j);
  	// 	sum-=v[j];
  	// 	if(v[j]==sum) {ans.push_back(i+1);sum+=v[j];break;}
  	// 	sum+=v[j];
  	//   }
  	// }
  	++mp[v[i]];
  	sum+=v[i];
  }
  debug(ans);
  cout<<ans.size()<<endl;
  for(auto &it: ans){
  	cout<<it<<" ";
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
    //cin>>TT;
    while(TT--) solve();
    return 0;

}