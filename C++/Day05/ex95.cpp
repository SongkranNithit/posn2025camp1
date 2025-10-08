#include <bits/stdc++.h>
using namespace std;

int pow(int n, int i) {
    if (i == 0) {
        return 1;
    }
    return n * pow(n, i - 1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, i;
    cin >> n >> i;
    cout << pow(n, i);
    return 0;
}