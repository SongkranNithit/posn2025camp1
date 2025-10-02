#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    
    int a,b,c;
    cin >> a >> b >> c;
    if ((a*a) + (b*b) == (c*c)){
        cout << "Right Triangle";
    } else cout << "Not a Right Triangle";
    return 0;
}