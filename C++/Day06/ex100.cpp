#include <bits/stdc++.h>
using namespace std;

void sumall(int *p);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5];
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    sumall(arr);
    return 0;
}

void sumall(int *p){
    for (int i = 0; i < 5; i++){
        cout << *(p + i) << " "; //dereferencing
    }

}