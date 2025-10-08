#include <bits/stdc++.h>
using namespace std;

void sumall(int *p);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[10];
    for (int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    sumall(arr);
    return 0;
}

void sumall(int *p){
    double sum = 0;
    int c=0;
    for (int i = 0; i < 10; i++){
        sum += *(p + i); //dereferencing
    }
    sum = sum/10.0;
    for (int i = 0; i < 10; i++){
        if (*(p + i) > sum) c++;
    }
    cout << c;
}