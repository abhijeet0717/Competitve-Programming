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
  ll curr_sum = 0;
  map<ll,int> found_before;
  found_before[curr_sum] = 1;
  for (int i = 0; i < n; ++i)
   {
      if(i%2) curr_sum -= a[i];
      else curr_sum += a[i];
      if(found_before[curr_sum] == 1){
         yes;return;
      }
      found_before[curr_sum] = 1;
   }
   no;return; 
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


/*
vector<ll> pref_odd,pref_even;
  ll prev=0;
  for (int i = 0; i < n; i+=2)
  {
     prev += a[i];
     pref_odd.push_back(prev);
  }
  prev = 0;
  for (int i = 1; i < n; i+=2)
  {
     prev += a[i];
     pref_even.push_back(prev);
  }

*/