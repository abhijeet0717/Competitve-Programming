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



typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

long long gcd(long long a, long long b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

void solve() 
{
 ll a,b,c;cin>>a>>b>>c;
 ll hcf=gcd(a,gcd(b,c));
 ll ans=(a+b+c)/hcf-3;
 if (ans<=3)
 {
 	cout<<"YES\n";
 }
 else{
 	cout<<"NO\n";
 }
}


int main() {
// #ifndef ONLINE_JUDGE
//    freopen("Error.txt", "w", stderr);
// #endif
   fastio();
   int TT;
    //TT=1;
    cin>>TT;
    while(TT--) solve();
    return 0;

}

