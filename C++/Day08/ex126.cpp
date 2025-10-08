#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (auto &r : a) for (int &x : r) cin >> x;

    if (!a[0][0]) return cout << "No path found\n", 0;

    queue<pair<int,int>> q;
    vector<vector<pair<int,int>>> p(n, vector<pair<int,int>>(n, {-1,-1}));
    q.push({0,0});
    a[0][0] = -1; // visited mark

    int dx[4]={1,-1,0,0}, dy[4]={0,0,1,-1};
    while (!q.empty()) {
        auto [x,y] = q.front(); q.pop();
        for (int k=0;k<4;k++) {
            int nx=x+dx[k], ny=y+dy[k];
            if(nx>=0&&ny>=0&&nx<n&&ny<n&&a[nx][ny]==1){
                a[nx][ny]=-1; p[nx][ny]={x,y};
                q.push({nx,ny});
            }
        }
    }

    if (a[n-1][n-1]!=-1) return cout << "No path found\n", 0;

    vector<vector<int>> res(n, vector<int>(n));
    for (int x=n-1,y=n-1;x!=-1&&y!=-1;) {
        res[x][y]=1;
        tie(x,y)=p[x][y];
    }

    for (auto &r : res) {
        for (int x : r) cout << x << " ";
        cout << "\n";
    }
}
