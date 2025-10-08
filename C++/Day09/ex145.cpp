#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n; cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] != s){
            if (arr[i].length() < s.length()) cout << "P" << i+1 << ":F" << endl;
            else {
                for (int j = 0; j < s.length();j++){
                    if (arr[i][j] == s[j]) continue;
                    else{ cout << "P" << i+1 << ":E(at" << j+1 << ")" << endl;
                        break;
                    }
                }
            }

        } else cout << "P" << i+1 << ":S" << endl;
    }
    return 0;
}