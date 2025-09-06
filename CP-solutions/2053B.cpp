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
int TT;

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
  vector<int> l(n),r(n);
  string s;
  int maxm=0;
  loop(0,n) s+='0';
  
  loop(0,n){
  	cin>>l[i]>>r[i];
  	maxm=max(maxm,r[i]);
  }
  vector<int> v(maxm+2,0);
  loop(0,n){
  	if(l[i] == r[i]){
  		v[l[i]]++;
  	}
  }
  vector<int> temp(maxm+2,0);
  loop(0,maxm+2) temp[i]=min(1,v[i]);
  loop(1,maxm+2){
  	temp[i]+=temp[i-1];
  }
  debug(v,temp);
  loop(0,n){
  	if(l[i] == r[i] ){
  		int ele=l[i];
  		if(v[ele]== 1) s[i]='1';
  		else s[i]='0';
  	}
  	else{
  		int fixed_cnt=temp[r[i]]-temp[l[i]-1];
  		int sze=r[i]-l[i]+1;
  		//debug(i,sze,fixed_cnt);
  		if(fixed_cnt >= sze){
  			s[i]='0';
  		}
  		else s[i]='1';
  		}
  		// int cnt=count(v.begin()+l[i],v.begin()+r[i],0);
  		// if(cnt){
  		// 	s[i]='1';
  		// }
  		// else s[i]='0';
  		// }
  }

  cout<<s<<endl;return;
}


signed main() {
#ifndef ONLINE_JUDGE
   freopen("Error.txt", "w", stderr);
#endif
   fastio();
   
    TT=1;
    cin>>TT;
    while(TT--) solve();
    return 0;

}

		