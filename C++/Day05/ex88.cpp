#include <bits/stdc++.h>
using namespace std;


int multiply(int x,int y){
    if (y == 1){
        return x*2;
    } else if (y == 2){
        return x*3;
    } else if (y == 3){
        return x;
    }
}

int sumdod(int x){
    string a = to_string(x);
    int b = a.length(),sumdod=0;
    for (int i = 0; i < b; i++){
        if ((a[i] - '0') % 2 ==0) continue;
        else sumdod += (a[i]-'0');
    }
    return sumdod;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,sum=0;
    cin >>n;
    int arr[n];
    int x,y;
    for (int i =0; i < n; i++){
        cin >> x >> y;
        sum = multiply(x,y) + (sumdod(x)*y);
        arr[i] = sum;
    }
    for (auto m : arr){
        cout << m << endl;
    }
    return 0;

}