#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX = 200007;
const int MOD = 1000000007;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,count(0),ans(0);
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
    	cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
    	if (arr[i]>0)
    	{
    		count+=arr[i];
    	}
    	else{
    		if (count>0)
    		{    			count--;
    		}
    		else{
    			ans++;
    		}
    	}
    }
    cout<<ans;
    return 0;
}
