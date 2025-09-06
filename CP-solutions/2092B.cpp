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
  string a,b;cin>>a>>b;
  int cnt = 0;
  loop(0,n){
  	if(i%2==0){
  		if(a[i]=='1') cnt++;
  	}
  	else{
  		if(b[i]=='0') cnt--;
  	}
  }
  if(cnt > 0){
   no;return;
  }
  cnt=0;
  loop(0,n){
  	if(i%2==1){
  		if(a[i]=='1') cnt++;
  	}
  	else{
  		if(b[i]=='0') cnt--;
  	}
  }
  if(cnt > 0){
   no;return;
  }
  yes;return;
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
int odd_zero=0,odd_one=0,even_zero=0,even_one=0;
  bool odd=true,even=true;
  loop(0,n){
  	if(i%2==0 and a[i]=='1') odd=false;
  	if(i%2 and a[i]=='1') even=false;
  }
  loop(0,n){
  	if(i%2 == 0){
  		if(a[i]=='0') odd_zero++;
  		else odd_one++;
  	}
  	else if(i%2 != 0){
  		if(a[i]=='0') even_zero++;
  		else even_one++;
  	}
  }
  loop(0,n){
  	if(i%2 == 0){
  		if(b[i]=='0') even_zero++;
  		else even_one++;
  		
  	}
  	else if(i%2 != 0){
  		if(b[i]=='0') odd_zero++;
  		else odd_one++;
  	}
  }
  debug(odd_zero,odd_one);
  debug(even_zero,even_one);
  if(!odd or !even){
  	if(!odd and odd_zero >=odd_one ){
  	yes;return;
  }
  else if(!even and even_zero>= even_one){yes;return;}
  no;return;
  }
  
  yes;return;
*/