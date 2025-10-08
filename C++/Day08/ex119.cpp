#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n;
    cin >> n;
    string arr[n];
    bool ans = true;
    for (int i = 0; i< n; i++){
        cin >> arr[i];
        size_t pos = s.find(arr[i]);
        if (pos == string::npos){
            ans = false;
            break;
        }
    }

    if (ans){
        cout << "true";
    } else cout << "false";
    return 0;
}