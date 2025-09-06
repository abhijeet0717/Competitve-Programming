#include <bits/stdc++.h>
using namespace std;



int main()
{
  int t;cin>>t;
  while(t--){
  	int n,k;cin>>n>>k;
  	vector<int> arr(n);
  int sum(0);
  for (int i = 0; i < n; i++)
  {
  	cin>>arr[i];
  	sum+=arr[i];
  }
  debug(sum);
  if (k>=n)
  {
  	cout<<sum/2<<endl;return;
  }
  sort(all(arr));
  int ans(0);
  for (int i = 0; i <k; i++)
  {
  	if(i>=(k/2)){ans+=arr[i];}
  }
  cout<<ans<<endl;return;
  }
  return 0;
}