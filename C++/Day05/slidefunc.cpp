#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int a){
    if (a <= 1) return false;
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0){
            return false;
        }
    }
    return true;
}


int main(){
    
    int a;
    cin >>a;
    IsPrime(a);
    if (IsPrime(a)){
        cout << "Prime";
    } else "Not Prime";

    return 0;
}