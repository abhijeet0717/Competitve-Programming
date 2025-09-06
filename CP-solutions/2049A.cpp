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
  readv(a,n);
  bool found=false,found2=false;
  for(auto &it: a){
  	if(it!=0) found=true;
  	if(found and it==0){
  		found2=true;
  	}
  	else if (found2==true)
  	{
  		cout<<2<<endl;return;
  	}
  }
  if(found){
  	cout<<1<<endl;return;
  }
  cout<<0<<endl;return;
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






// if(count(s.begin(), s.end(), 's') == 0){
//         yes;
//         return;
//     }
//     if(count(s.begin(), s.end(), 'p') == 0){
//         yes;
//         return;
//     }
//     int suff = n , pref = 1;
//     for(int i= 0; i < n; ++i){
//         if(s[i] == 's'){
//             if(suff != n - i){
//                 no;
//                 return;
//             }
//             else{
//                 suff--;
//             }
//         }
//         if(s[i] == 'p'){
//             if(suff != pref){
//                 no;
//                 return;
//             }
//             pref--;
//         }
//         if(s[i] == '.'){
//             suff--;
//         }
//     }
//     yes;
