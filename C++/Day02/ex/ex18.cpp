#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    
    int n;
    cin >> n;
    if (n == 1){
        cout << "n";
        return 0;
    }
    if (n == 2){
        cout << "y";
        return 0;
    }
    for (int i = 2; i < sqrt(n); i++){
        if (n % i == 0){
            cout << "n";
            return 0;
        }
    }
    cout << "y";
    return 0;
}