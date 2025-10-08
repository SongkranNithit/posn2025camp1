#include <bits/stdc++.h>
using namespace std;

void max(int *p);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5];
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    max(arr);
    return 0;
}

void max(int *p){
    int max = INT_MIN;
    for (int i = 0; i < 5; i++){
        if (*(p+i) > max){
            max = *(p+i);
        }
    }
    cout << max;

}