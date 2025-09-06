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
#define print(arr)     \
  for (auto &it : arr) \
  {                    \
    cout << it << " "; \
  }                    \
  cout << endl;

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
  ll q;
  cin >> q;
  deque<ll> dq;
  bool inv = false;
  ll sum = 0, r = 0;
  while (q--)
  {
    ll s;
    cin >> s;
    ll sze = dq.size();
    if (s == 1)
    {
      if (sze == 0)
      {
        cout << 0 << endl;
        continue;
      }
      ll x;
      if (!inv)
      {
        x = dq.back();
        dq.pop_back();
        dq.push_front(x);
      }
      else
      {
        x = dq.front();
        dq.pop_front();
        dq.push_back(x);
      }
      r += sum - (ll)sze * x;
    }
    if (s == 2)
    {
      r = (ll)(sze + 1) * sum - r;
      inv = !inv;
    }
    if (s == 3)
    {
      ll k;
      cin >> k;
      r += (ll)k * (sze + 1);
      sum += k;
      if (!inv)
      {
        dq.push_back(k);
      }
      else
      {
        dq.push_front(k);
      }
    }
    cout << r << endl;
  }
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
