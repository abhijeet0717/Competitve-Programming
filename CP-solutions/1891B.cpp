#include <bits/stdc++.h>
#define ll          long long
#define all(x)      x.begin(), x.end()
#define read(x)     ll x; cin >> x
#define readv(v,n) vector<ll>v(n); for(int i=0; i<n; i++)cin>>v[i];
using namespace std;

void solve() 
{
 int n,q;cin>>n>>q;
 readv(arr,n);
 readv(task,q);
 
 int last_task(50);
 vector<ll> nettask;
 for (int i = 0; i < q; i++)
 {
   if (task[i]<last_task)
   {
     nettask.push_back(task[i]);
     last_task=task[i]; // updating smallest 
   }
 }

 for (int i = 0; i < nettask.size(); i++)
 {
     for (int j = 0; j < n; j++)
     {
       if ((arr[j] % (1ll << nettask[i])) == 0) {arr[j] += (1ll << (nettask[i] - 1));}
     }   
 }
 for (int i = 0; i < n; i++)
 {
   cout<<arr[i]<<" ";
 }
 cout<<endl;
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