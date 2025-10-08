#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    getline (cin,str);
    int l = str.length(),index;
    for (int i = 1; i < l; i++){
        if (str[0] == str[i]){
            index = i;
            break;
        }
    }
    cout << "[" << str.substr(0,index)<< " , " << l/index << "]";
    return 0;
}