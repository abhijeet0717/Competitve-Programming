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



#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif




void solve() 
{
   int a,b;
 cin>>a>>b;
 int ans(0);
 set<pair<int,int>> v,vi;
 
    int x,y;cin>>x>>y;
    vi.insert({x+a,y+b});
    vi.insert({x-a,y+b});
    vi.insert({x+a,y-b});
    vi.insert({x-a,y-b});
    vi.insert({x+b,y+a});
    vi.insert({x-b,y+a});
    vi.insert({x+b,y-a});
    vi.insert({x-b,y-a});

    cin>>x>>y;
    v.insert({x+a,y+b});
    v.insert({x-a,y+b});
    v.insert({x+a,y-b});
    v.insert({x-a,y-b});
    v.insert({x+b,y+a});
    v.insert({x-b,y+a});
    v.insert({x+b,y-a});
    v.insert({x-b,y-a});

 for(auto it: v){
   if(vi.find(it)!=vi.end()) ans++;
 }
 cout<<ans<<endl;
}


int main() {
#ifndef ONLINE_JUDGE
   freopen("Error.txt", "w", stderr);
#endif
   fastio();
   int TT;
    //TT=1;
    cin>>TT;
    while(TT--) solve();
    return 0;

}

