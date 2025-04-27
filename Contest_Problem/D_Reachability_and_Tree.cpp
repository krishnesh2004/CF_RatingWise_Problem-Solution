#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;

const int maxn = 2e5 + 5;
vector<vector<int>> adj(maxn);
vector<pair<int, int>> ans;
int deg[maxn];

// Solution Function
void dfs(int u, int parent, bool check) {
    for (auto it : adj[u]) {
        if (it == parent) {
            continue;
        }
        if (check) {
            ans.push_back({u, it});
        } else {
            ans.push_back({it, u});
        }
        dfs(it, u, !check);
    }
}

void DEKHO_TRY_KARO() {
    int n;
    cin >> n;
    // Clear previous data
    for (int i = 1; i <= n; i++) {
        adj[i].clear();
        deg[i] = 0;
    }
    ans.clear();

    // Read edges
    for (int i = 1; i < n; i++) {  
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }

    // Find a center node with degree 2
    int center = -1;
    for (int i = 1; i <= n; i++) {
        if (deg[i] == 2) {
            center = i;
            break;
        }
    }

    // If no center found, output "NO"
    if (center == -1) {
        cout << "NO" << endl;
        return;
    }

    // Get the two neighbors of the center
    int x = adj[center][0];
    int y = adj[center][1];
    ans.push_back({x, center});
    ans.push_back({center, y});

    // Perform DFS from both neighbors
    dfs(x, center, true);
    dfs(y, center, false);

    // Check if we have exactly n-1 edges in the answer
    if (ans.size() != n - 1) {
        cout << "NO" << endl;
        return;
    }

    // Output the result
    cout << "YES" << endl;
    for (auto it : ans) {
        cout << it.first << " " << it.second << endl;
    }
}

// Main Function
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) DEKHO_TRY_KARO();
    return 0;
}
