#include <bits/stdc++.h>
using namespace std;

void oe(int *p,int n);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[7];
    for (int i = 0; i < 7; i++){
        cin >> arr[i];
    }
    int num;
    cin >> num;
    oe(arr,num);
    return 0;
}

void oe(int *p,int num){
    for (int i = 0; i < 7; i++){
        if(*(p + i) == num) {
            cout << "Index : " << i;
            return;
        }
    }
    cout << "Index : -1";
}