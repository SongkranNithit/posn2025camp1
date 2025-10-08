#include <bits/stdc++.h>
using namespace std;

void fac(int n,int sum){
    if (n==0){
        cout << sum;
        return;
    }
    if (n < 0){
        cout << "Factorial is not defined for negative numbers.";
        return;
    }
    fac(n-1,sum*n);
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >>n;
    fac(n,1);
    return 0;
}