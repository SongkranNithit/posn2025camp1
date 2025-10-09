#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    double sum=0;
    const double g = 9.81;
    cin >>n;
    for (int i =0; i <n; i++){
        int m,h;
        cin >> m >> h;
        sum += (m*g*h);
    }
    cout << "Total Gravitational Potential Energy: " << fixed << setprecision(2) << sum << " J";
    return 0;
}