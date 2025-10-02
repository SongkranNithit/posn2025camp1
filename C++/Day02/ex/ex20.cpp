#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    
    int n;
    cin >> n;
    if (n % 2 ==0){
        cout << "e: " << n/2 << ",o: " << n/2;
    } else cout << "e: " << n/2 << ",o: " << n/2 + 1;
    return 0;
}