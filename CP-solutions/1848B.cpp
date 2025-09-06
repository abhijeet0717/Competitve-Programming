#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define read(x) \
    int x;      \
    cin >> x;
#define readll(x) \
    ll x;         \
    cin >> x;
#define readv(v, n)             \
    vector<int> v(n);           \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define readvll(v, n)           \
    vector<ll> v(n);            \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define loop(x, n) for (ll i = x; i < n; i++)
#define loopj(x, n) for (ll j = x; j < (n); j++)
#define rloop(n, x) for (ll i = n - 1; i >= x; i--)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}


void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    vector<vector<int>> pos(k);
    vector<int> last(k,-1);
    vector<int> maxm(k, -1), sec_max(k, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        // pos[x - 1].push_back(i);
    }
    for (int i = 0; i < n; ++i)
    {
        int step = i - last[c[i] - 1];
        if (step > maxm[c[i] - 1])
        {
            sec_max[c[i] - 1] = maxm[c[i] - 1];
            maxm[c[i] - 1] = step;
        }
        else if (step > sec_max[c[i] - 1])
        {
            sec_max[c[i] - 1] = step;
        }
        last[c[i] - 1] = i;
    }
    for (int i = 0; i < k; ++i)
    {
        int step = n - last[i];
        if (step > maxm[i])
        {
            sec_max[i] = maxm[i];
            maxm[i] = step;
        }
        else if (step > sec_max[i])
        {
            sec_max[i] = step;
        }
    }
    // debug(pos);
    int ans(n);
    //  for (int i = 0; i < k; i++)
    //  {
    //   int diff=pos[i][0];
    //   if(diff>=maxm[i]) {maxm[i]=diff;sec_max[i]=maxm[i];}
    //   for (int j = 1; j < pos[j].size(); j++)
    //   {
    //     diff=pos[i][j]-pos[i][j-1];
    //     if(diff>=maxm[i]) {maxm[i]=diff;sec_max[i]=maxm[i];}
    //   }
    //  }
    debug(maxm);
    debug(sec_max);
    for (int i = 0; i < k; i++)
    {
        ans = min(ans, max((maxm[i] + 1) / 2, sec_max[i]));
    }
    cout << ans - 1 << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    int TT;
    TT = 1;
    cin >> TT;
    while (TT--)
        solve();
    return 0;
}