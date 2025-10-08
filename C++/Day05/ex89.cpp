#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, radius;
    int a, b, x = INT_MIN, y = INT_MIN;
    cin >> n >> radius;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        if (b > x){
            x = b;
        }
        if (a > y){
            y = a;
        }
    }
    vector<vector<int>> map(x+1, vector<int>(y+1, 0));

   
    for (int i = 0; i < x+1; i++){
        for (int j = 0; j < y+1; j++){
            cout << map[i][j] << " ";
        }
        cout << endl;
    }




    return 0;
}