#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int num,maxnumc=INT_MIN;
    cin >> num;
    for (int i = 0; i < n; i++){

        for (int j = 0; j < m; j++){
            int sum = 0;
            for (int k = 0; k < m; k++){
                if (arr[i][k] == num){
                    sum++;
                }
            }
            for (int s = 0; s < n; s++){
                if (arr[s][j] == num){
                    sum++;
                }
            }
            if (arr[i][j] == num) sum--;
            if (sum > maxnumc){
                maxnumc = sum;
            }
        }
    }
    int c =0;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++){

        for (int j = 0; j < m; j++){
            int sum = 0;
            for (int k = 0; k < m; k++){
                if (arr[i][k] == num){
                    sum++;
                }
            }
            for (int s = 0; s < n; s++){
                if (arr[s][j] == num){
                    sum++;
                }
            }
            if (arr[i][j] == num) sum--;
            if (sum == maxnumc){
                c++;
                v.push_back({i+1,j+1});
            }
        }
    }
    cout << maxnumc << endl;
    cout << c << endl;
    for (auto m : v){
        cout << m.first << " " << m.second << endl;
    }
    return 0;


}