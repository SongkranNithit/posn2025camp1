#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int m,w,c;
    cin >> m >> w >>c;
    double avg = (m+w+c)/3.0;
    if (m >= 80 && w >= 80 && c >= 80){
        cout << "Grand Wizard";
    } else if (avg >= 70 && ((m >= 75 && w >= 75) || (c >= 75 && w >= 75) ||  (m >= 75 && c >= 75))){
        cout << "Demon Slayer";
    } else if (max(m,max(w,c)) > 90){
        cout << "Special Review";
    } else if (avg < 50){
        cout << "Failed";
    } else cout << "Basic Level";
    return 0;
}