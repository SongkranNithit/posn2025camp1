#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int up = 0, num = 0;
    string s;
    getline(cin,s);
    for (int i = 0; i < s.length(); ++i){
        if (isupper(s[i])){
            up++;
        }
        if (isdigit(s[i])){
            num++;
        }
    }
    cout << up << endl << num;

    return 0;
}