#include<bits/stdc++.h>


using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define read(x)     int x;cin>>x;
#define readll(x)   ll x;cin>>x;
#define readv(v,n)  vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define readvll(v,n)  vector<ll> v(n);for(int i=0;i<n;i++) cin>>v[i];


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
const int N=100007;
vector<int> binary_decimals;

bool divide(int n){
	//cout<<"2";
	bool ans=false;
	if(n==1) return true;
	for(int it:binary_decimals){
  		if(n%it==0) ans|=divide(n/it);
  }
  return ans;
}

void solve() 
{
  int n;cin>>n;
  if (divide(n))
  {
  	cout<<"YES\n";return;
  }
  cout<<"NO\n";
}


int main() {
#ifndef ONLINE_JUDGE
   freopen("Error.txt", "w", stderr);
#endif
   fastio();
   for (int i = 2; i <N; i++)
   {
   	bool flag=true;
   	int temp=i;
   	 while(temp){
   	 	//cout<<temp<<endl;
   	 	if (temp%10>1)
   	 	{
   	 		flag=false;break;
   	 	}
   	 	temp=temp/10;
   	 }

   	 if (flag)
   	 {
   	 	//cout<<"Happen";
   	 	binary_decimals.push_back(i);
   	 }
   }
   int TT;
    TT=1;
    cin>>TT;
    while(TT--) solve();
    return 0;

}