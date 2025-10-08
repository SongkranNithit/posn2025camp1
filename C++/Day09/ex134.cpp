#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    const double g = 9.81;
    double bg,bm,tg,tms,totalb,totalt;
    cin >> bg >> bm >> tg >> tms;
    bm *= 1000;
    totalb = bg * g * bm;
    totalt = 0.5 * tg * tms * tms;
    if (abs(totalb - totalt) <= 0.1){
        cout << "=";
    } else if (totalb > totalt){
        cout << "Brr Brr Patapim " << fixed << setprecision(2) << totalb - totalt << " Joules";
    } else cout << "Tung Tung Tung Sahur " << fixed << setprecision(2) <<   totalt-totalb << " Joules";
    return 0;
}