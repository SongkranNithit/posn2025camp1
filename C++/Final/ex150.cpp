#include <bits/stdc++.h>
using namespace std;

void sumall(int *p,int n);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sumall(arr,n);
    return 0;
}

void sumall(int *p,int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += *(p + i);
    }
    cout << sum;

}