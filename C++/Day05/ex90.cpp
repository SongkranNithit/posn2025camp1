#include <bits/stdc++.h>
using namespace std;

void star(int n,int i){
    if (i>n) return;
    string stars(i,'*');
    cout << stars << endl;
    star(n,i+1);
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >>n;
    star(n,1);
    return 0;
}