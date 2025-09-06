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
  int n;cin>>n;
  vector<int> adj(n);
  vector<int> indegree(n,0);
  vector<int> r(n);
  loop(0,n){
  	int x;cin>>x;--x;
  	adj[i]=x;
  	indegree[x]++;
  	r[i]=1;
  }
  queue<pair<int,int>> q;
  // choosing source points to apply multi source bfs 
  loop(0,n){
  	if(indegree[i]==0){
  		q.push({i,1});
  	}
  }
  int ans=0;
  while(!q.empty()){
  	int ele_idx = q.front().first;
  	int cnt = q.front().second;
  	q.pop();
  	ans=max(ans,cnt);
  	indegree[adj[ele_idx]]--;
  	r[adj[ele_idx]]=r[ele_idx]+1;
  	if (indegree[adj[ele_idx]]==0)
  	{
  		q.push({adj[ele_idx],r[adj[ele_idx]]});
  	}
  }
  cout<<ans+2<<endl;return;

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