#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
    if (n==0) return 0;
    if (n == 1) return 1;
    return fibo(n-1) + fibo(n-2);
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >>n;
    cout << "The Fibonacci value of " << n << " is: " << fibo(n) << "\n";
    cout << "Fibonacci sequence up to " << n << ": ";

    for (int i = 0; i <= n; i++) {
        cout << fibo(i) << " ";
    }
    return 0;
}