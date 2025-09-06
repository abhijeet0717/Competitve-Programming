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
  int n,k;cin>>n>>k;
  vector<int> x(n);
  unordered_map<int,int> mp;
  loop(0,n){
  	cin>>x[i];
  	mp[x[i]]++;
  }
  // debug(mp);
  int score=0;
  for(auto it: x){
  	if(mp[it]>0 and it<=k/2){
  		if(mp.find(k - it) == mp.end()) continue;
  		if(mp[k-it]>0){
  			mp[it]--;mp[k-it]--;
  			score++;
  		}
  	}
  }
  // sort(all(x));debug(x);
  // cout<<score<<endl;return;
  // for(auto &it: mp){
  // 	int x = it.second;
  // 	int y = 0;
  // 	if(mp.find(k - it.first) == mp.end()) continue;
  // 	y = mp[k - it.first];
  // 	int temp = min(x, y);
  // 	if(it.first != (k - it.first)) score += (temp);
  // 	else score += temp / 2;
  // 	it.second -= temp;
  // 	mp[k - it.first] -= temp;
  	
  // }
  cout<<score<<endl;return;
  //debug(mp);
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