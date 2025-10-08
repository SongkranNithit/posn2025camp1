#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] == 2 || arr[i] % 2 != 0){
            cout << "T" << endl;
        } else{ 
            cout << "F" << endl;
        }
    }
    return 0;
}