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

void spiral(int r, int c, int n, int val, vector<vector<int>> &ans) {
  if (r == n || c == n || r < 0 || c < 0 || ans[r][c] != -1) return;
  ans[r][c] = val--;
  while (c + 1 < n && ans[r][c + 1] == -1) ans[r][++c] = val--;
  while (r + 1 < n && ans[r + 1][c] == -1) ans[++r][c] = val--;
  while (c > 0 && ans[r][c - 1] == -1) ans[r][--c] = val--;
  while (r > 0 && ans[r - 1][c] == -1) ans[--r][c] = val--;
  spiral(r, c + 1, n, val, ans);
}

void solve() 
{
  int n;cin>>n;
  vector<vector<int>> grid(n,vector<int>(n,-1));
  spiral(0,0,n,n*n-1,grid);

  loop(0,n){
  	loopj(0,n){
  		cout<<grid[i][j]<<" ";
  	}
  	cout<<endl;
  }
  return;
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