#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    

    int n=0,sum = 0,x;
    while (true){
        cin >> x;
        if (x == -1){
            break;
        }
        sum += x;
        n++;
    }
    cout << sum/n;

    return 0;
}