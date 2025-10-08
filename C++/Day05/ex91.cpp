#include <bits/stdc++.h>
using namespace std;

void multiply(int n,int sum){
    if (n==0){
        cout << "The result is: " << sum;
        return;
    }
    int a;
    cin >> a;
    sum *= a;
    multiply(n-1,sum);
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >>n;
    multiply(n,1);
    return 0;
}