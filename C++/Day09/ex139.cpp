#include <bits/stdc++.h>
using namespace std;

string base16(int n){
    string hex = "0123456789ABCDEF";
    if (n < 16) return string(1, hex[n]);
    return base16(n/16) + hex[n%16];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >>n;
    cout << base16(n);
    return 0;
}