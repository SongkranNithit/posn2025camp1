#include <bits/stdc++.h>
using namespace std;
#define long long int;
bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int n,sum=0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) sum += i;
    }
    cout << sum;
    return 0;
}
