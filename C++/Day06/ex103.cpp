#include <bits/stdc++.h>
using namespace std;

void oe(int *p);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[10];
    for (int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    oe(arr);
    return 0;
}

void oe(int *p){
    int odd=0,even = 0;
    for (int i = 0; i < 10; i++){
        if(*(p + i)%2 == 0) even++;
        else odd++;
    }
    cout << "Odd number: " << odd << ", Even number: " << even;
}