#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX = 200007;
const int MOD = 1000000007;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;cin>>n;
    int arr[n],ans(INT_MAX);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        ans=min(ans,abs(arr[i]));
    }
    cout<<ans<<endl;
    return 0;
}