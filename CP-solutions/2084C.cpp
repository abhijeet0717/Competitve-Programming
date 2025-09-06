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
#define print(arr) for(auto &it:arr){cout<<it<<" ";}cout<<endl;


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
  #include "debug.h" 
#else
  #define debug(x...)
#endif

class DSU {
public:
    vector<int> Size, parent;

    void make(int n) {
        Size.resize(n + 1, 1);  // Initialize each component size to 1
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int get(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = get(parent[node]);
    }

    void unite(int u, int v) {
        int ulp_u = get(u);
        int ulp_v = get(v);

        if (ulp_u == ulp_v) return;

        // Union by size: attach the smaller tree to the root of the larger tree
        if (Size[ulp_u] < Size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            Size[ulp_v] += Size[ulp_u];  // Update size of the root
        } else {
            parent[ulp_v] = ulp_u;
            Size[ulp_u] += Size[ulp_v];  // Update size of the root
        }
    }
};

void solve() 
{
  int n; cin >> n;
  vector<int>a(n);
  for(int i = 0; i < n; ++i){
      cin >> a[i];
  }
  vector<int>b(n);
  for(int i = 0; i < n; ++i){
      cin >> b[i];
  }
  DSU dsu;
  dsu.make(n + 1);
  for(int i = 0; i < n; ++i){
      dsu.unite(a[i], b[i]);
  }
  int two = 0, one = 0;
  for(int i = 1; i <= n; ++i){
      if(i == dsu.get(i)){
          int sz = dsu.Size[i];
          if(sz > 2){
              cout << -1 << "\n";
              return;
          }
          if(sz == 2){
              ++two;
          }
          else{
              ++one;
          }
      }
  }
  if(n % 2 == 0 and one > 0){
      cout << "-1" << "\n";
      return;
  }
  if(n % 2 == 1 and one != 1){
      cout << "-1" << "\n";
      return;
  }
  int l = 0, r = n - 1, moves = 0;
  vector<pair<int,int>>ops;
  map<int,int>mp;
  if(n % 2 == 0){
      for(int i = 0; i < n; ++i){
          mp[b[i]] = i;
      }
      while(l <= r){
          if(a[l] != b[l] and a[l] != b[r]){
              int ind = mp[a[l]];
              swap(b[ind], b[r]);
              swap(a[ind], a[r]);
              mp[b[ind]] = ind;
              mp[b[r]] = r;
              ops.push_back({ind, r});
          }
          ++l; r--;
      }
      cout << ops.size() << "\n";
      for(auto &it: ops){
      	auto l =it.first , r= it.second;
        cout << l + 1 << " " << r + 1 << "\n";
      }
  }
  else{
      for(int i = 0; i < n; ++i){
          if(a[i] == b[i] and i != (n / 2)){
              swap(a[i], a[n/2]);
              swap(b[i], b[n/2]);
              ops.push_back({i, n/2});
          }
      }
      for(int i = 0; i < n; ++i){
          mp[b[i]] = i;
      }
      while(l <= r){
          if(a[l] != b[l] and a[l] != b[r]){
              int ind = mp[a[l]];
              swap(b[ind], b[r]);
              swap(a[ind], a[r]);
              mp[b[ind]] = ind;
              mp[b[r]] = r;
              ops.push_back({ind, r});
          }
          ++l; r--;
      }
     
      cout << ops.size() << "\n";
      for(auto &it: ops){
      	auto l =it.first , r= it.second;
        cout << l + 1 << " " << r + 1 << "\n";
      }
  }
  debug(a);debug(b);
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