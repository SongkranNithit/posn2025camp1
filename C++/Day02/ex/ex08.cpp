#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    
    int arr[3], max = INT_MIN;
    for (int i =0; i < 3; i++){
        cin >> arr[i];
        if (arr[i] >= max){
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}