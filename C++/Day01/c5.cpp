#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int paid,price,n1000=0,n500=0,n100=0,n50=0,n20=0,coin=0;
    cin >> price >> paid;
    int change = paid - price;
    if (change == 0){
        cout << "no change";
        return 0;
    } else if (change < 0){
        cout << "no money";
        return 0;
    } else {
        while (change > 0){
        if (change >= 1000){
            change -= 1000;
            n1000++;
        } else if (change >= 500){
            change -= 500;
            n500++;
        } else if (change >= 100){
            change -= 100;
            n100++;
        } else if (change >= 50){
            change -= 50;
            n50++;
        } else if (change >= 20){
            change -= 20;
            n20++;
        } else{
            coin++;
            change--;
        }
     }
    }
    cout << "1000 = " << n1000 << endl;
    cout << "500 = " << n500 << endl;
    cout << "100 = " << n100 << endl;
    cout << "50 = " << n50 << endl;
    cout << "20 = " << n20 << endl;
    cout << "coin = " << coin;
    return 0;
}