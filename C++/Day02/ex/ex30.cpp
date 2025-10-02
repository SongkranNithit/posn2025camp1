#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    
    int n;
    double sum=0;
    cin >>n;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    cout << sum/n;
    return 0;
}