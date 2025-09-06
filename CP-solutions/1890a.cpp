#include <bits/stdc++.h>
#define ll          long long
#define all(x)      x.begin(), x.end()
#define read(x)     ll x; cin >> x
#define readv(v,n) vector<ll>v(n); for(ll i=0; i<n; i++)cin>>v[i];
using namespace std;

void solve() 
{
 int n;cin>>n;
 vector<int> v(n);
 for (int i = 0; i < n; i++)
 {
     cin>>v[i];
 }
 sort(all(v));
 int count1(0),count2(0);
 for (int i = 0; i < n; i++)
   {
    if (v[i]==v[0])
    {
       count1++;
    }
    if (v[i]==v[n-1])
    {
        count2++;
    }
   }  
   if (count1==n)
   {
       cout<<"YES\n";
   }
   else if (count1+count2==n && abs(count1-count2)<2)
   {
       cout<<"YES\n";
   }
   else{
    cout<<"NO\n";
   }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--) solve();
    return 0;
}