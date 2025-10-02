#include <bits/stdc++.h>
using namespace std;
#define long long int;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int n,max = INT_MIN,j;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] > max){
            max = arr[i];
            j = i;
        }
    }
    cout << j;
    return 0;
}