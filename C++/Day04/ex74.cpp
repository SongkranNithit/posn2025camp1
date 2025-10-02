#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    string s;
    getline(cin,s);
    int dot = s.rfind('@');
    if (dot == -1){
        cout << "Invalid email format.";
        return 0;
    }
    string sub1 = s.substr(0,dot);
    string sub2 = s.substr(dot+1,s.length());
    cout << sub1 << endl << sub2;
    return 0;
}