#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    int deg; cin >> deg;
     if(deg == 90){
        for(int i=0; i<n; i++){
            for(int j=n-1; j>=0; j--){
                cout << arr[j][i] << " ";
            }
            cout << "\n";
        }
    }
    else if(deg == 180){
        for(int i=n-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else if(deg == 270){
        for(int i=n-1; i>=0; i--){
            for(int j=0; j<n; j++){
                cout << arr[j][i] << " ";
            }
            cout << "\n";
        }
    }
}
