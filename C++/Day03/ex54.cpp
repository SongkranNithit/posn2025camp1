#include <bits/stdc++.h>
using namespace std;
#define long long int;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin >> n >> m;
    int farm[n][m];
    vector<int> ans;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
        cin >> farm[i][j];
    }
    }
    int q,sum=0;
    cin >> q;
    int r1[q],c1[q],r2[q],c2[q];
    for (int j = 0; j < q; j++){
        cin >> r1[j] >> c1[j] >> r2[j] >> c2[j];
        r1[j]--;
        c1[j]--;
        r2[j]--;
        c2[j]--;
        for (int a = r1[j]; a <= r2[j]; a++){
            for (int b = c1[j]; b <= c2[j]; b++){
                sum += farm[a][b];
        }
        }
        ans.push_back(sum);
        sum = 0;
    }


    for (auto r : ans){
        cout << r << endl;
    }

    return 0;

}