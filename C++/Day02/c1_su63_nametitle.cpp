#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int g,a,m;
    string name;
    getline(cin,name);
    cin >> g >> a >>m;
    if (g == 1){
        if (a >= 15){
            cout << "Mr. " << name;
        } else cout << "Master " << name;
    } else {
        if (a >= 15){
            if (m == 1){
            cout << "Mrs. " << name;
        }
        } else cout << "Miss " << name;
    }
    return 0;
}