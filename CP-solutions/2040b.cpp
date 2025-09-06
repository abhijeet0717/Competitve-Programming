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

vector<int> pre(1e5+4,0);

void solve() 
{
  int n;cin>>n;
  if(n==1){
  	cout<<1<<endl;return;
  }
  // int cnt=1;
  // for(int i=0;i<pre.size();i++){
  // 	if(n<=pre[i]){
  // 		cnt+=i;break;
  // 	}
  // }
  cout<<pre[n-1]<<endl;return;
}


int main() {
#ifndef ONLINE_JUDGE
   freopen("Error.txt", "w", stderr);
#endif
   fastio();
   int TT;
    TT=1;
    cin>>TT;
    int temp=1,x=1;
    pre[0]=1;
    while(x<1e5){
    	pre[x]=1;;
    	x=(x+1)*2;
    }
    loop(1,pre.size()){
    	pre[i]+=pre[i-1];
    }
    while(TT--) solve();
    return 0;

}