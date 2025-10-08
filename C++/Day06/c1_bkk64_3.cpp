#include <bits/stdc++.h>
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string n;
    cin >> n;
    int a = n.length(),sum=0;
    for (int i =0; i <a;i++){
        sum += (n[i] - '0');
    }
    cout << sum;
    return 0;
}