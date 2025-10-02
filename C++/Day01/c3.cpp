#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n,a=1;
    cin >> n;
    int i = n;
    do {
        a *= i;
        i--;
    } while (i > 0);
    
    cout << a;

    return 0;
}