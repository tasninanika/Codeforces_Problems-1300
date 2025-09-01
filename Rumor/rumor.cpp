#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
vector<int> g[N];
bool visited[N];
long long cost[N];

long long dfs(int u) {
    visited[u] = true;
    long long mn = cost[u];
    for (int v : g[u]) {
        if (!visited[v]) {
            mn = min(mn, dfs(v));
        }
    }
    return mn;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> cost[i];
    }

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            ans += dfs(i);
        }
    }

    cout << ans << endl;
    return 0;
}
