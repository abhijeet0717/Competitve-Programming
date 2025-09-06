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
  int n,k;cin>>n>>k;
  readv(a,n);
  int chnge=n-k;
  unordered_set<int> st2;
  queue<int> st1;
  if(chnge==0){
  	for(int i=1;i<n;i+=2){
  		st1.push(a[i]);
  	}
  	//debug(st1);
  	int mex=1;
  	while(!st1.empty()){
  		int it=st1.front();
  		st1.pop();
  		if(it==mex) mex++;
  		else break;
  	}
  	cout<<mex<<endl;return;
  }
  if(chnge>0){
  	int maxm=0;
  	for(int i=1;i<=1+chnge;i++){
  		maxm=max(maxm,a[i]);
  	}
  	if(maxm>1){
  		cout<<1<<endl;return;
  	}
  	else{
  		cout<<2<<endl;return;
  	}
  }

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