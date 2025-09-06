#include <bits/stdc++.h>
using namespace std;

typedef long long   ll;
#define umap        unordered_map
#define speed       ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(x)      x.begin(), x.end()
#define pb          push_back

int main()
{
    speed;
    int t;
    cin>>t;
    while(t--)
    {
      int n,k,x;cin>>n>>k>>x;
      if (k>n||k>x+1)
      {
      	cout<<"-1\n";
      }
      else if (k==x)
      {
      	cout<<k*(k-1)/2 + (n-k)*(k-1)<<endl;
      }
      else{
      		cout<<k*(k-1)/2 + (n-k)*(x)<<endl;
      }
    }
    return 0;
}