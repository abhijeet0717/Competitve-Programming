#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX = 200007;
const int MOD = 1000000007;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int arr[n];int count=n;
       for (int i = 0; i < n; i++)
       {
       	cin>>arr[i];
       }
       for (int i = 1; i < n; i++)
       	{
       		if (arr[i]<arr[i-1])
       		{
       			count++;
       		}
       	}
       if (count==1)
       {
       	cout<<count<<endl;cout<<arr[0]<<endl;
       }
       else{
       	cout<<count<<endl;cout<<arr[0]<<" ";
       	for (int i = 1; i < n; i++)
       	{
       		cout<<arr[i]<<" ";
       		if (arr[i]<arr[i-1])
       		{
       			cout<<arr[i]<<" ";
       		}
       	}cout<<endl;
       }
    }
    return 0;
}
