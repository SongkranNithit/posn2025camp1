#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    getline(cin,a);
    set<char> set;
    for (int i = 0; i < a.length(); i++){
        if (isalpha(tolower(a[i]))){
            set.insert(tolower(a[i]));
        } else continue;
    }
    cout <<  set.size();
    return 0;
}