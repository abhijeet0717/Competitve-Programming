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
      int n;cin>>n;
      ll x;cin>>x;
      ll a[n];
      for (int i = 0; i < n; i++)
      {
      	cin>>a[i];
      }
      ll low(0),high(1000000007);
      while(high-low>1){
      	ll mid=(low+high)/2;
      	if (sum<=x)		
      	{
      		low=mid;
      	}
      	else{
      		high=mid;
      	}
      	
      }
      cout<<low<<endl;
    }
    return 0;
}