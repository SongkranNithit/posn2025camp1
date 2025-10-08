#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,sum = 0;
    for (int i = 0; i < 9; i++){
        cin >> x;
        sum += x;
    }
    cout << "Sum of all values: " << sum;
    return 0;
}