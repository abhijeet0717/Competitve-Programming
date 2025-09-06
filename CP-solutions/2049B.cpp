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
	int n;cin>>n;
  string s;cin>>s;
  //int n=s.length();
  bool flag1=false,flag2=false;
  bool c1=false,c2=false;
  string s2=s;
  if (s[0] == 's') s[0] = '.';
  int idx_s=s.find('s');
  if (idx_s== string::npos) flag2=true;
  int idx_p=s2.find('p');
  if (idx_p== string::npos) flag1=true;

  //if s and p dont coexist,i.e, either one is not present
  if(flag1 or flag2){
  	yes;return;
  }
  // if p comes before s then invalid
  else if(idx_p<idx_s){
  	no;return;
  }
  
  else{
  	//yes;return;
  	if(idx_p!=n-1) c1=true;
    if(idx_s!=0) c2=true;
  	if(c1 and c2){
  		no;return;
  	}
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


// bool f_p=false;
  // bool f_s=false;
  // bool flag=false;
  // for( char c: s)
  // {
  // 	debug(c);
  // 	if (!f_s and c=='s')
  // 	{
  // 		f_s=true;
  // 	}
  // 	if(!f_p and c=='p'){
  // 		f_p=true;
  // 	}
  // 	if(f_s and c=='p'){
  // 		flag=true;
  // 	}
  // 	if(f_p==true and c =='s'){
  // 		//cout<<"hi";
  // 		cout<<"NO\n";return;
  // 	}
  // }


  // if(flag){
  // 	 bool c1=false,c2=false,f1=false,f2=false;
  // 	 for(char c: s){
  // 	 	if(c1==false and c=='.'){
  // 	 		f1=true;
  // 	 	}
  // 	 	if(c2==true and c=='.'){
  // 	 		f2=true;
  // 	 	}
  // 	 	if(c=='s') c1=true;
  // 	 	else if(c=='p') c2=true;
  // 	 }
  // 	 if(f1 or f2){
  // 	 	no;return;
  // 	 }
  // }
 
  // cout<<"YES\n";return;