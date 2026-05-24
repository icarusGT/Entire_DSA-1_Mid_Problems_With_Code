#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int n, m, u, v, start;
    cin >> n >> m;
    vector<int> adj[100];
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin >> start;
    bool visited[100] = {false};
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (int nei : adj[node])
            if (!visited[nei]) {
                visited[nei] = true;
                q.push(nei);
            }
    }
}
