#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    
    int a,b,sum=0;
    cin >> a >> b;
    int arr[a][b],arr1[a];
    for (int i =0; i < a; i++){
        for (int j = 0; j < b; j++){
            cin >> arr[i][j];
        }
    }

    for (int i =0; i < a; i++){
        for (int j = 0; j < b-1; j++){
            arr1[i] = max(arr[i][j],arr[i][j+1]);
        }
    }
    for (int i =0; i < a; i++){
        cout << arr1[i] << " ";
    }
    return 0;
}