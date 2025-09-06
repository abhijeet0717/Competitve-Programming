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

void solve() 
{
  int n,m;cin>>n>>m;
  //vector<vector<char>> v(n);
  vector<string> v(n);
  loop(0,n){
  	string s;cin>>s;
  	v[i]=s;
  	// loopj(0,m){
  	// 	v[i][j]=(char)s[j];
  	// }
  }
  //debug(v);
  vector<string> dup = v;
  loop(0,n){
  	loopj(0,m){
  		if(dup[i][j]=='1' or dup[i][j]=='2' ) dup[i][j]='2';
  		else break;
  	}
  }

  loopj(0,m){
  	loop(0,n){
  		if(dup[i][j]=='1' or dup[i][j]=='2') dup[i][j]='2';
  		else break;
  	}
  }
  
  debug(dup);
  loop(0,n){
  	loopj(0,m){
  		if(dup[i][j]=='1'){
  			no;return;
  		}
  	}
  }
  yes;return;

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