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
  read(n);read(k);
  map<int, int> mp;
  loop(0,2*n){
  	int x;cin>>x;
  	if(i<n) mp[x]++; 
  }
  vector<int> v0,v1,v2;
  loop(1,n+1){
  	if(mp[i]==0) v0.push_back(i);
  	if(mp[i]==1) v1.push_back(i);
  	if(mp[i]==2) v2.push_back(i);
  }
  //debug(mp);
  //debug(v0);debug(v1);debug(v2);
  int count=0;
  for(auto it: v2){
  	if(count<2*k) {
  		count+=2;
  	cout<<it<<" "<<it<<" ";
  	}
  }
  for(auto it: v1){
  	if(count<2*k) 
  	{count++;
  	cout<<it<<" ";}
  }
  cout<<endl;
  count=0;
   for(auto it: v0){
   	if(count<2*k) 
   	{
  		count+=2;
  	cout<<it<<" "<<it<<" ";
  	}
  }
  for(auto it: v1){
  	if(count<2*k) 
  	{count++;
  	cout<<it<<" ";}
  }
  cout<<endl;
  return;
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