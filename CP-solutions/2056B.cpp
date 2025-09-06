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

   int TT;

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
  vector<vector<char>> v(n,vector<char>(n));
  loop(0,n){
  	loopj(0,n) cin>>v[i][j];
  }
  //debug(adj);
  vector<int> indegree(n+1,0);
  vector<vector<int>> adj(n+1);
  loop(0,n){
  	loopj(i+1,n){
  		if(v[i][j]=='1'){
          adj[i+1].push_back(j+1);
          indegree[j+1]++;
        }
  		else {
        adj[j+1].push_back(i+1);
        indegree[i+1]++;
      }
  	}
  }
  //debug(adj);
  queue<int> q;
  loop(1,n+1){
    if(indegree[i]==0) q.push(i);
  }
  vector<int> ans;
  while(!q.empty()){
    int node=q.front();q.pop();
    
    for(auto &it: adj[node]){
      indegree[it]--;
      if(indegree[it]==0) q.push(it);
    }
    ans.push_back(node);
  }
  debug("hi");
  for(auto &it: ans){
    cout<<it <<" ";
  }
  cout<<endl;return;
}


signed main() {
#ifndef ONLINE_JUDGE
   freopen("Error.txt", "w", stderr);
#endif
   fastio();
    TT=1;
    cin>>TT;
    while(TT--) solve();
    return 0;

}


