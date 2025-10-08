#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,c=0; cin >>n;
    while (n > 1){
        if (n % 2 ==0){
          n /= 2;  
        } 
        else{
            n = 3*n + 1;
        }
        c++;
    }
    cout << c;
    return 0;
}