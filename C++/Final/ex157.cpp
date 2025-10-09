#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,x,y,c=0;
    cin >> n >>m;
    if (m != 0) cin >> x >> y;
    for (int i = 0; i <m-1; i++){
        cin >> x;
        if (x == y){
            c++;
        }
        cin >> y;
    }
    if (c == n-2){
        cout << "YES";
    } else cout << "NO";
    return 0;
}