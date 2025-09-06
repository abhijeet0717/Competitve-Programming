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
 read(n);
 int it=1;
 loop(0,n){
  cout<<it<<" ";
  it+=2;
 }
 cout<<endl;return;
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



// if(s[i]=='0') { cnt++;}
//   else{
//     div=(cnt/m);
//     if(k<=m){
//       ans+=ceil((double)(cnt/m)/(double)2);
//     }
//     else{
//       ans++;div--;
//       ans+=ceil((double)(div-1)/(double)(k-1));
//     }
//     cnt=0;
//   }
//  }
//  div=(cnt/m);
//  if(s[n-1]=='0') 
//  {
//   div=(cnt/m);
//     if(k<=m){
//       ans+=ceil((double)(cnt/m)/(double)2);
//     }
//     else{
//       ans++;div--;
//       ans+=ceil((double)(div-1)/(double)(k-1));
//     }