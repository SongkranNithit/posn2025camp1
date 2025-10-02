#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    string s;
    cin >> s;
    if (s[0] == '0' && s.length() == 10){
        string first = s.substr(1, 2);
        string mid   = s.substr(3, 3);
        string last  = s.substr(6, 4);
        cout << "+66 (" << first << ") " << mid << "-" << last;
    } else cout << "Invalid Format";

    return 0;
}