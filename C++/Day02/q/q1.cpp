#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    int bank[5] = {1000,500,100,50,20};
    cout << " How much money : ";
    cin >> n;
    for (auto m : bank){
        cout << m << " : " << n/m << endl;
        n = n%m;
    } cout << "coin = " << n;
    return 0;
}