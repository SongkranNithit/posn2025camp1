#include <bits/stdc++.h>
using namespace std;

void avg(int n,int sum,int i){
    if (n==0){
        cout << sum/i;
        return;
    }
    int a;
    cin >> a;
    sum += a;
    avg(n-1,sum,i);
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >>n;
    avg(n,0,n);
    return 0;
}