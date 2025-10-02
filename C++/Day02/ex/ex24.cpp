#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    
    int n,sum = 1;
    cin >> n;
    while (n >= 1){
        sum *= n;
        n--;
    }
    cout << sum;
    return 0;
}