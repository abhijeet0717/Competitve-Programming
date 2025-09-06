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
  if (a[0] >= b[0])
    a[0] = b[0] - a[0];
  loop(1, n)
  {
    int diff = a[i] - a[i - 1];
    if (diff >= 0)
    {
      int c = a[i] - a[i - 1];
      auto it = lower_bound(all(b), c);
      if (it == b.end())
        continue;
      int newdiff = (*it - a[i]) - a[i - 1];
      if (newdiff >= diff)
        continue;
      else
      {
        a[i] = (*it - a[i]);
      }
    }
    else
    {
      int c = a[i] - a[i - 1];
      auto it = lower_bound(all(b), c);
      if (it == b.end())
        continue;
      int newdiff = (*it - a[i]) - a[i - 1];
      if (newdiff >= 0)
        continue;
      if (newdiff >= 0)
      {
        a[i] = (*it - a[i]);
      }
    }
  }
}
if (is_sorted(a.begin(), a.end()))
{
  yes;
  return;
}
no;
return;
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