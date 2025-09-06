
#include<bits/stdc++.h>

using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
void solve() 
{
  int n;cin>>n;
  vector<ll> v(n+1);
  vector<ll> count(n+1,0);
  for (int i = 0; i < n; i++)
  {
     int z;
     cin>>z;
     count[z]++;
  }
  //sort(all(v));
   long long ans(0),left(0);
  for (int i = 0; i <=n; i++)
  {
     ans+=(count[i]*(count[i]-1)/2)*left;
     ans+=(count[i]*(count[i]-1)*(count[i]-2))/6;
     left+=count[i];
  }
  // for (int i = 0; i <=n; i++)
  // {
  //  ans+=count[v[i]]*(count[v[i]]-1)*(count[v[i]]-2)/6;
  //  ans+=count[v[i]]*(count[v[i]]-1)/2*left;
  //  left+=count[v[i]];
  //  i+=count[v[i]];
  // }
  cout<<ans<<endl;
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



