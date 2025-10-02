#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    
    int n;
    cin >> n;
    if (n == 1){
        cout << "Not Prime";
        return 0;
    }
    if (n == 2){
        cout << "Prime";
        return 0;
    }
    for (int i = 2; i < sqrt(n); i++){
        if (n % i == 0){
            cout << "Not Prime";
            return 0;
        }
    }
    cout << "Prime";
    return 0;
}