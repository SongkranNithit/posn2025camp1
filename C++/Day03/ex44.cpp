#include <bits/stdc++.h>
using namespace std;
#define long long int;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int n,sum=0,c=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sum /= n;
    for (int i = 0; i < n; i++){
        if (arr[i] > sum){
            c++;
        }
    }
    cout << c;
    return 0;
}