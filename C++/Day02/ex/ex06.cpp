#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    
    int n;
    cin >> n;
    if (n >= 80){
        cout << "A";
    
    } else if (n >= 70){
        cout << "B";
    
    } else if (n >= 60){
        cout << "C";
    
    } else if (n >= 50){
        cout << "D";
    } else cout << "F";
    
    return 0;
}