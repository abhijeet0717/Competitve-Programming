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
  int n,m;cin>>n>>m;
  vector<string> v(n);
  vector<vector<int>> flag(n,vector<int>(m,-1));
  for(int i=0;i<n;i++){
  	cin>>v[i];
  }
  //marking boundary cases
  loop(0,n){
  	loopj(o,m){
  		if(i==0 or i==n-1 or j==0 or j==m-1){
  		 int x=v[i][j];
  		 if((i==0 and x=='U') or (i==n-1 and x=='D') or
          (j==0 and x=='L') or (j==m-1 and x=='R')) flag[i][j]=1;
  	    }
  	}
  }
  

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