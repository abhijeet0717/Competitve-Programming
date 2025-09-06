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
 vector<int> vis;
  void checkCycle(int papa, vector<int>graph[], int &circle_node){//Here we will check the cycle in current component
      vis[papa] = 1;
      for(int child : graph[papa]){
          if(vis[child] == 2)continue;
          else if(vis[child] == 1){
              circle_node = child;
              return;
          }
          else{
              checkCycle(child, graph, circle_node);
          }
      }
      vis[papa] = 2;
  }
  
  int getCircleLength(int papa, vector<int>graph[]){//Calculating the length of current circle
      if(vis[papa] == 1)return 0;
      vis[papa] = 1;
      return 1 + getCircleLength(graph[papa][0], graph);   
  }
  
  int longestCycle(vector<int>& edges) {
      int n = edges.size();
      vector<int> graph[n];
      
      for(int i = 0;i < n;i++){
          if(edges[i] != -1)graph[i].push_back(edges[i]);
      }
      vis.resize(n, 0);
      vector<int> circles;//Store every starting node of circle from every component.
      for(int i = 0;i < n;i++){
          int circle_node = -1;
          if(vis[i] == 0){
              checkCycle(i, graph, circle_node);
          }
          if(circle_node != -1){//Means found the cycle//circle_node is first node of cycle where cycle begins
              circles.push_back(circle_node);
          } 
      }
      if(circles.size() == 0)return -1;//Means no cycle exist	vis.assign(n, 0);
      int mx_len = INT_MIN;
      for(auto node : circles){
          mx_len = max(mx_len, getCircleLength(node, graph));
      }
      return mx_len;
  }

void solve() 
{
  int n;cin>>n;
  vector<int> edges(n);
  for (int i = 0; i < n; ++i)
  {
  	cin>>edges[i];
  }
  int ans=longestCycle(edges);
  cout<<ans<<endl;return;
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