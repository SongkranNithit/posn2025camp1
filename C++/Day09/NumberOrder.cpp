#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string n;
    cin >> n;
    int c=0,l = n.length();
    for (int i = 0; i < l;i++){
        for (int j = i+1; j < l;j++){
            if (n[i] > n[j]){
                c++;
            }
        }
    }
    cout << c;
    return 0;
}