#include <bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    

    int n,sum = 0;
    cin >>n;
    do{
        n /= 2;
        sum++;
    } while (n > 1);
    

    cout << (sum);

    return 0;
}