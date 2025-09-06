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
  ll n;cin>>n;
  readvll(a,n);
  ll p_cnt = 0, n_cnt = 0;
  ll no_of_neg = 1; 
  ll total_subseg = (n *(n+1))/2;
  loop(0,n){
    if(a[i] < 0 ){
      no_of_neg *= -1;
    }
    if(no_of_neg == -1){
      n_cnt++;
    }
    else p_cnt++;
  }
  cout<<(1+p_cnt)*n_cnt<<" "<<total_subseg - ((1+p_cnt)*n_cnt)<<endl;return;
}


signed main() {
#ifndef ONLINE_JUDGE
   freopen("Error.txt", "w", stderr);
#endif
   fastio();
   int TT;
    TT=1;
    //cin>>TT;
    while(TT--) solve();
    return 0;

}

/*
bool flag = true;
  vector<int> v1,v2;
  int cnt = 0;
  rloop(n,0){
    if(a[i] < 0 or i == 0){
      if(flag){v1.push_back(cnt+1);flag=false;cnt=0;}
      else if(!flag){v2.push_back(cnt+1);flag=true;cnt=0;}
    }
    else cnt++;
  }
  reverse(all(v1));reverse(all(v2));
  debug(v1,v2);
*/