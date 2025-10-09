#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,s1 = "",s2="";
    getline (cin,s);
    int l = s.length();
    for (int i = 0; i < l;i++){
        if (isalpha(s[i])){
            s1.push_back(toupper(s[i]));
            s2.push_back(toupper(s[i]));
        }
    }
    reverse(s2.begin(),s2.end());
    if (s1 == s2) cout << "YES";
    else cout << "NO";
    return 0;
}