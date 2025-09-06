#include <bits/stdc++.h>
using namespace std;

typedef long long i64;

void Test()
{
    int N;
    cin >> N;

    int K = 2 * N + 10;
    vector<int> is_prime(K, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < K; i++)
        if (is_prime[i])
            for (int j = i * i; j < K; j += i)
                is_prime[j] = false;

    vector<vector<int>> adj(N);
    for (int i = 1; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> ans(N);
    int cnt = 1;

    function<void(int, int)> Dfs = [&](int node, int par)
    {
        ans[node] = cnt++;
        for (auto child : adj[node])
        {
            if (child == par)
                continue;
            while (is_prime[cnt - ans[node]])
                cnt++;
            Dfs(child, node);
        }
    };
    Dfs(0, -1);

    assert(cnt <= 2 * N + 1);

    for (int i = 0; i < N; i++)
        cout << ans[i] << " ";
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
        Test();
}
