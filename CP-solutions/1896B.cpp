#include <bits/stdc++.h>
#define ll          long long
#define all(x)      x.begin(), x.end()
#define read(x)     ll x; cin >> x
#define readv(v,n) vector<ll>v(n); for(int i=0; i<n; i++)cin>>v[i];
using namespace std;

void solve() 
{
 int n;cin>>n;
 string s;cin>>s;
 int count(0),ans(0);
 for (int i = 0; i < n; i++)
  {
    if (s[i]=='A')
    {
      ++count;
      if (i!=n-1 &&s[i+1]=='B')
      {
        ans+=count;
        s[i+1]='A';
        count=0;
      }
    }
    else count=0;
  }
  cout<<ans<<endl;
}




int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    // t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
// read(n);
 //  string s;cin>>s;
 //  int swap(0),a_count(0),b_count(0),line(0);
 //  bool found(false);
 //  for (int i = 0; i < n; i++)
 // {
 //   if (s[i]=='A')
 //   {
 //     if (s[i-1]=='B' && i>0 )
 //     {
 //       a_count=0;b_count=0;
 //     }
 //    a_count++;found=true;
 //   }
 //   else if (s[i]=='B')
 //   {
 //    b_count++;
 //    if ((i==n-1 || s[i+1]=='A')&& (found))
 //    {
 //      swap+=(b_count)+(a_count-1);
 //      found=false;
 //    }
 //   }
 // }
 // cout<<swap<<endl;

//  int swap(0),a_count(0),b_count(0),line(0);
//  for (int i = 0; i < n; i++)
//  {
//    if (s[i]=='A')
//    {
//      if (i>0 && s[i-1]=='B')
//      {
//        line=0;
//      }
//      cout<<"hi";
//      a_count++;
//      swap+=(line-1)+b_count;
//      b_count=0;
//    }
//    else if (s[i]=='B')
//    {
//      b_count++;
//      a_count=0;
//    }
//  }
//  cout<<swap<<endl;
// }