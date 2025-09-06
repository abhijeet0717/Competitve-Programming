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
  string s;cin>>s;
  if(n==2){
    cout<<s<<endl;return;
  }
  if(n==3 && (s[0]=='0' || s[2]=='0')){cout<<0<<endl;return;}
  else{
    if(count(all(s),'0')>0) {cout<<0<<endl;return;}
  }
  // int one(0);
  // for(auto &it: s){
  //     if(it=='1') one++;
  // }
  //if(one==n){cout<<1<<endl;return;}
  int ans(INT_MAX);
  for (int i = 0; i < n-1; i++)
  {
    //int curr=10*(s[i]-'0')+(s[i+1]-'0');
    int curr(0);
    for (int j = 0; j < n; j++)
    {
      // if(j!=i || j!=(i+1) || (s[j]=='1')) continue;
      // curr+=(s[i]-'0');
      if(i==j){
        if((10*(s[j]-'0')+(s[j+1]-'0'))!=1 || curr==0) {curr+=10*(s[j]-'0')+(s[j+1]-'0');j++;}
        else if(s[i]!='1'){
          curr+=(s[j]-'0');
        }
      }
    }
    ans=min(ans,curr);
  }
  cout<<ans<<endl;return;
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