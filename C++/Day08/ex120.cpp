#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,c=0;
    cin >> n;
    int arr[n];
    for (int i = 0;i < n;i++){
        cin >> arr[i];
    }

    for (int i = 0;i < n;i++){
        for (int j = i+1 ;j < n-1;j++){
        int hmin = min(arr[i],arr[j]);
        bool ok = true;
        for (int k = i+1; k < j;k++){
            if (arr[k] > hmin){
                ok = false;
                break;
            }
        }
        if (ok) c++;
        }
    }

    cout << c+1;
    return 0;
}