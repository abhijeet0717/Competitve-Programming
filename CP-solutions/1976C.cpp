
#include<bits/stdc++.h>


using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define delb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define read(x)     int x;cin>>x;
#define readll(x)   ll x;cin>>x;
#define readv(v,n)  vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define readvll(v,n)  vector<ll> v(n);for(int i=0;i<n;i++) cin>>v[i];


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key


bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowof2(int n){return (n && !(n&(n-1)));}
bool isPerfectSq(int n){ll root=sqrtl(n);return root*root==n;}
#define lcm(a,b) (a*(b/gcd(a,b)))


#ifndef ONLINE_JUDGE
#include "debug.h" 
#else
  #define debug(x...)
#endif


void solve() 
{
  int n,m;cin>>n>>m;
  readvll(a,n+m+1);
  readvll(b,n+m+1);
  vector<ll> ans(n+m+1,0);
  vector<bool> q(n+m,false);
  int x(0),a_count(0),b_count(0),bad(-1);
  ll sum(0);
  for (int i = 0; i < n+m; i++)
  {
    if (a_count<n and b_count<m)
    {
      if(a[i]>b[i]) {
        sum+=a[i];a_count++;
        q[i]=true;
      }
      else{
       sum+=b[i];
       b_count++;
      }
    }
    else if(a_count<n ){
      if(a[i]<b[i] and bad==-1) bad=i;
      sum+=a[i];a_count++;
      q[i]=true;
    }
    else{
      if(a[i]>b[i] and bad==-1) bad=i;
      sum+=b[i];b_count++;
    }
  }
  ans[n+m]=sum;
  for (int i = 0; i < m+n; i++)
  {
    if(bad!=-1 and i<bad and q[i]!=q[bad]){
      if(q[i]==true){
        ans[i]=sum-a[i]+a[bad]+b[n+m]-b[bad];
      }
      else{
        ans[i]=sum-b[i]+b[bad]+a[n+m]-a[bad];
      }
    }
    else{
      if(q[i]==true){
        ans[i]=sum-a[i]+a[n+m];
      }
      else{
        ans[i]=sum-b[i]+b[n+m];
      }
    }
  }
  for( auto &it: ans){
    cout<<it<<" ";
  }
  cout<<endl;return;
  // for (int i = n+m-1; i >=0; i--)
  // {
  //   if(q[i]==true){
  //     ans[i]=sum-a[i]+a[i+1]
  //   }
  // }

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



