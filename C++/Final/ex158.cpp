#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int S, T;
    cin >> S >> T;

    vector<int> dist(n + 1, -1);
    queue<int> q;

    dist[S] = 0;
    q.push(S);

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(auto next : graph[curr]){
            if(dist[next] == -1){ 
                dist[next] = dist[curr] + 1;
                q.push(next);
            }
        }
    }

    cout << dist[T];
    return 0;
}
