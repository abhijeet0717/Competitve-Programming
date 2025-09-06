#include <bits/stdc++.h>
#define ll          long long
#define all(x)      x.begin(), x.end()
#define read(x)     ll x; cin >> x
#define readv(v,n) vector<ll>v(n); for(int i=0; i<n; i++)cin>>v[i];
using namespace std;
#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; _print(x); cerr<<endl;
#else
#define debug(x)
#endif

void _print(int a){ cerr<<a;}
void _print(long long a){ cerr<<a;}
void _print(char a){ cerr<<a;}
void _print(string a){ cerr<<a;}

template<class T>void _print(vector<T> vector_template){
  cerr<<"[ ";
  for(T i: vector_template){ 
    cerr<<i<<" ";
  } 
  cerr<<"]";
}
template<class T> void _print(set<T> set_template){
  cerr<<"[ ";
  for(T i: set_template){ 
    cerr<<i<<" ";
  } 
  cerr<<"]";
}


void solve() 
{
  int n,k;cin>>n>>k;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  if (k > 1 || is_sorted(arr.begin(), arr.end()))
  {
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
  }
}




int main()
{
 #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
  #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    //t=1;
     cin>>t;
    while(t--) solve();
    return 0;
}
