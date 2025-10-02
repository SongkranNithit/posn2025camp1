#include <bits/stdc++.h>
using namespace std;
#define long long int;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,sum=0,x;
    cin >> n >> m;
    for (int i = 0; i < n*m; i++){
        cin >> x;
        sum += x;
    }

    cout << sum;
    return 0;
}