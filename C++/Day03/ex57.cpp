#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m,x,sum=0;
    cin >>n >> m;
    int arr[n][m];
    int arr1[n] = {0};

    for (int i = 0; i <n; i++){
        for (int j =0;j<m;j++){
            cin >> arr[i][j];
            arr1[i] += arr[i][j];
        }
    }
     for (int i = 0; i <n; i++){
            cout << arr1[i] << endl;
        
    }
    return 0;
}