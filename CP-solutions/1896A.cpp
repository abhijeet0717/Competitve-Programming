#include <bits/stdc++.h>
#define ll          long long
#define all(x)      x.begin(), x.end()
#define read(x)     ll x; cin >> x
#define readv(v,n) vector<ll>v(n); for(int i=0; i<n; i++)cin>>v[i];
using namespace std;

void solve() 
{
 read(n);
 int arr[n],minm(n+1);
 for (int i = 0; i < n; i++)
 {
   cin>>arr[i];
   minm=min(minm,arr[i]);
 }
 if (arr[0]==minm)
 {
   cout<<"YES\n";
 }
 else{
  cout<<"NO\n";
 }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    // t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}