#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,c=0; cin >>n;
    cout << "N : " << n << endl;
    cout << n << endl;
    while (n > 1){
        if (n % 2 ==0){
          n /= 2;
          cout << n << endl;
        } 
        else{
            n = 3*n + 1;
            cout << n << endl;
        }
        c++;
    }
    
    cout << "Length : " << c+1;
    return 0;
}