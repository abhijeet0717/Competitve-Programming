#include<bits/stdc++.h>


using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

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
 int TT;
void solve() 
{
  int n,m,k;cin>>n>>m>>k;
  string s;cin>>s;
  int jump=m-1,water=0;
  bool flag=true;
  for (int i = 0; i < n; ++i)
  {
    if(s[i]=='L') jump=m;
    else if(s[i]=='W' and jump<=0) water++;
    else if(s[i]=='C' and jump<=0) flag=false;
    jump--;
  }
  if(water>k) flag=false;
  	if(flag) {cout<<"YES\n";return;}
  	else {cout<<"NO\n";return;}
}


int main() {
#ifndef ONLINE_JUDGE
   freopen("Error.txt", "w", stderr);
#endif
   fastio();
  
    TT=1;
    cin>>TT;
    while(TT--) solve();
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;

}

// if(water+croc_dist+ 1>m ){
  		// 	debug(TT,water,croc_dist,i);
  		// 	cout<<"NO\n";return;
  		// }
  		// if(water+1>k+m){
  		// 	debug(TT,water,croc_dist,i);
  		// 	cout<<"NO\n";return;
  		// }
  		// water=0;croc_dist=0;


  // if(water+croc_dist+ 1>m )
  //  {
  // 		cout<<"NO\n";return;
  // 	}
  //  if(water+1>k)
  //  {
  // 		cout<<"NO\n";return;
  // 	}

    // if(s[i]=='W') {water++;}
    // if(s[i]=='C') {croc_dist++;last=i;}
    // if (s[i]=='L')
    // {
    //  if(m>water+croc_dist){
    //    water=0;croc_dist=0;
    //  }
    //  else if(croc_dist==0 ){
    //    water-=m;
    //    k-=water+1;
    //    if(k<0) flag=false;
    //  }
    //  else{
    //    flag=false;break;
    //  }
    // }
// if(m>water+croc_dist){
//         water=0;croc_dist=0;
//       }
//       else if(croc_dist==0 and k+m>water){
//         water=0;croc_dist=0;
//       }
//       else if(croc_dist>0){
//         if(m>last+2 and (n-last-1)<=k){water=0;croc_dist=0;}
//       }
//       else{
//         flag=false;
//       }
//  