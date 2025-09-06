#include <bits/stdc++.h>

using namespace std;

#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define read(x) \
  int x;        \
  cin >> x;
#define readll(x) \
  ll x;           \
  cin >> x;
#define readv(v, n)           \
  vector<int> v(n);           \
  for (int i = 0; i < n; i++) \
    cin >> v[i];
#define readvll(v, n)         \
  vector<ll> v(n);            \
  for (int i = 0; i < n; i++) \
    cin >> v[i];
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define loop(x, n) for (ll i = x; i < n; i++)
#define loopj(x, n) for (ll j = x; j < (n); j++)
#define rloop(n, x) for (ll i = n - 1; i >= x; i--)

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
  int n, m;
  cin >> n >> m;
  readv(a, n);
  readv(b, m);
  sort(all(b));
  ll prev = -1e18;
  bool possible = true;
  for (int i = 0; i < n; i++) {
      ll c1 = a[i];
      ll need = prev + a[i];
      ll c2 = LLONG_MAX;
      auto it = lower_bound(all(b), need);
      if (it != b.end()){
          c2 = (ll)(*it) - a[i];
      }
      long long chose = LLONG_MAX;
      if (c1 >= prev) {
          chose = min(chose, c1);
      }
      if (c2 >= prev) {
          chose = min(chose, c2);
      }
      if (chose == LLONG_MAX) {
          possible = false;
          break;
      }
      prev = chose;
  }
  cout << (possible ? "YES" : "NO")<<"\n";


}

signed main()
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