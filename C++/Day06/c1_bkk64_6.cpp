#include <bits/stdc++.h>
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string n;
    int sume = 0, sumo=0;
    cin >> n;
    string nre = n;
    reverse(nre.begin(),nre.end());
    int check = nre[0] - '0';
    nre.erase(0,1);
    for (int i =0; i < nre.length(); i++){
        if (i % 2 ==0){
            sume += (nre[i] - '0');
        } else sumo += (nre[i] - '0');
    }
    sume *= 3;
    sume += sumo;
    sume += check;
    if (sume % 10 ==0){
        cout << "YES";
    } else cout << "NO";
    return 0;
}