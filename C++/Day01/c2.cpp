#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string n;
    cin >>n;
    int i = n.length()-1;
    while (i >= 0){
        cout << n[i];
        i--;
    }
    return 0;
}