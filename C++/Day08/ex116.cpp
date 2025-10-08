#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> pascal(n);

    for (int i = 0; i < n; i++){
        pascal[i].resize(n-i);
    }
    pascal[n-1][0] = 1;

    for (int i = n-2; i >= 0;i--){
        int size = pascal[i].size();
        pascal[i][0] = 1;
        pascal[i][size-1] = 1;

        for (int j = 1; j < size-1;j++){
            pascal[i][j] = pascal[i+1][j] + pascal[i+1][j-1];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < pascal[i].size(); j++){
            cout << pascal[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}