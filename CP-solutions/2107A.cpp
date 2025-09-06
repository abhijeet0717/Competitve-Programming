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
  int n;cin>>n;
  readv(a,n);
  int idx = -1;
   bool ans = false;
  loop(0,n){
  	bool flag = false;
  	int gaccu = 0;
  	loopj(0,n){
  		if(j == i) continue;
  		if(!flag ) {gaccu = a[j];flag=true;}
  		gaccu = __gcd(gaccu,a[j]);
  	}
  	if(gaccu != a[i]){ans = true; idx = i;}
  }
  if(ans){
  	yes;
  	loop(0,n){
  		if(i == idx) cout<<1<<" ";
  		else cout<<2<<" ";
  	}
  	cout<<endl;return;
  }

  no;return;

  // int n1 = -1 , n2 = -1 ;
  // int x = 0, y = 0;
  // vector<int> mp(n,0);
  // loop(0,n){
  // 	loopj(i+1,n){
  // 		if(__gcd(a[i],a[j]) != 1){
  // 			n1 = i,n2 = j;
  // 			x = __gcd(a[n1],a[n2]);
  // 			mp[n1] = 2, mp[n2] = 2;
  // 		}
  // 	}
  // }
  // loop(0,n){
  // 	if(i != n1 and i != n2){
  // 		mp[i] = 1;
  // 		if(y == 0) y = a[i];
  // 		y = __gcd(y,a[i]);
  // 	}
  // }
  // debug(mp);
  // if(x == y){
  // 	no;return;
  // }
  // yes;
  // loop(0,n){
  // 	cout<<mp[i]<<" ";
  // }
  // cout<<endl;return;
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