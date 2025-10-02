#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,c=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1; j++){
            if (arr[j+1] < arr[j]){
                swap(arr[j],arr[j+1]);
                c++;
            }
        }
    }
    cout << c;
    return 0;
}