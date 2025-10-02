#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int c = 1;
    string s;
    getline(cin,s);
    int len = s.length();
    for (int i =1; i < s.length();i++){
        if (s[i] == s[i-1]){
            c++;
        } else {
            cout << c << s[i-1];
            c= 1;
        }
    }
    cout << c << s.back();
    return 0;
}