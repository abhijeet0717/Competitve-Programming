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
  	int A;
    cin >> A;
    vector<ll> B(A), C(A);
    for (int i = 0; i < A; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < A; i++) {
        cin >> C[i];
    }

    // Johnson's rule: split into two sets
    //  - front: B[i] <= C[i], sorted by increasing B[i]
    //  - back:  B[i] >  C[i], sorted by decreasing C[i]
    vector<pair<ll,int>> front, back;
    front.reserve(A);
    back.reserve(A);
    for (int i = 0; i < A; i++) {
        if (B[i] <= C[i]) 
            front.emplace_back(B[i], i);
        else
            back.emplace_back(C[i], i);
    }

    sort(front.begin(), front.end(), [](auto &x, auto &y){
        return x.first < y.first;
    });
    sort(back.begin(), back.end(), [](auto &x, auto &y){
        return x.first > y.first;
    });

    // Build the Johnson sequence
    vector<int> seq;
    seq.reserve(A);
    for (auto &p : front) seq.push_back(p.second);
    for (auto &p : back)  seq.push_back(p.second);

    // Simulate processing on two machines
    ll t1 = 0; // time when Pam (machine 1) finishes
    ll t2 = 0; // time when Sam (machine 2) finishes
    for (int idx : seq) {
        t1 += B[idx];          // Pam starts as soon as she's free
        t2 = max(t2, t1) + C[idx];  // Sam starts only after both Pam and Sam are free
    }

    cout << t2 << "\n";
}


signed main() {
#ifndef ONLINE_JUDGE
   freopen("Error.txt", "w", stderr);
#endif
   fastio();
   int TT;
    TT=1;
    //cin>>TT;
    while(TT--) solve();
    return 0;

}
