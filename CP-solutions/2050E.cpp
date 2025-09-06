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
  string a,b,c;cin>>a>>b>>c;
  int n=a.length(),m=b.length(),x=c.length();
  vector<vector<int>> dp(n+1,vector<int>(m+1,INT_MAX));
  dp[0][0]=0;
  loop(0,n){
    dp[i+1][0] = dp[i][0] + (a[i]!=c[i]);
  }
  loopj(0,m){
    dp[0][j+1] = dp[0][j] + (b[j]!=c[j]);
  }
  loop(1,n+1){
    loopj(1,m+1){
      dp[i][j]=min(dp[i-1][j]+(a[i-1]!=c[i+j-1]),dp[i][j-1]+(b[j-1]!=c[i+j-1]));
    }
  }

  cout<<dp[n][m]<<endl;return;

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