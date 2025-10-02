#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    
    int n,sum=0;
    cin >>n;

    for (int i = 1; i <= n; i++){

        if (i % 3 == 0 || i % 5 ==0){
            sum += i;
        } else continue;

    }
    cout << sum;
    return 0;
}