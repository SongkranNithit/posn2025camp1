#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    
    int n,sum = 0;
    cin >> n;
    while (n >= 1){
        if (n % 2 != 0){
            n--;
            continue;
        } else sum += n;
        n--;
    }
    cout << sum;
    return 0;
}