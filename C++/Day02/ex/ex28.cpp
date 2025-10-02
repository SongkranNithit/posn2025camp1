#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    
    int n;
    cin >>n;
    if (n%2==0){
        cout << n/2;
    } else{
        cout <<(n*-1) + n/2;
    }
    return 0;
}