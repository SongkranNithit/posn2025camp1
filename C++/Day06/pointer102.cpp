#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int i;
    i = 10;
    int *p = &i;
    *p = 4;



    cout << i << endl;
    cout << *p << endl;
    cout << p << endl;
    cout << &i;


    return 0;
}