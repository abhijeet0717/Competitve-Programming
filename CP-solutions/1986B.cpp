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

const int FULL=200;
int a[FULL][FULL]={0};

void solve() 
{
	for (int i = 0; i<200; i++)
 	{
     for (int j = 0; j<200; j++)
     {
        a[i][j] =0;
  }
}
  int n,m;cin>>n>>m;
  // loop(0,n+3){
  //  	loopj(0,m+3){
  //  		cout<<a[i][j]<<" ";
  //  	}
  //  	cout<<endl;
  //  } 
  for (int i = 1; i <=n; i++)
    {
    	for (int j = 1; j <=m; j++)
    	{
    		int x;cin>>x;
    		a[i][j]=x;
    	}
    } 
   loop(1,n+1){
   	//cout<<"hi";
   	loopj(1,m+1){
   		
   		if (a[i][j]>a[i+1][j] && a[i][j]>a[i][j+1] && a[i][j]>a[i-1][j] && a[i][j]>a[i][j-1] )
   		{
   			a[i][j]=max(a[i][j+1],max(a[i+1][j],max(a[i-1][j],a[i][j-1])));
   		}
   	}
   } 
   
    loop(1,n+1){
   	loopj(1,m+1){
   		cout<<a[i][j]<<" ";
   	}
   	cout<<endl;
   } 
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