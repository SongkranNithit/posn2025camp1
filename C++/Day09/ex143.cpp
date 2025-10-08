#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[2] = {0};
    for (int i = 0; i <2; i++){
        int h,m,s;
        cin >> h >> m >> s;
        arr[i] += (h*3600) + (m*600) + s;
    }

    if (arr[0] < arr[1]){
        cout << "Team 1 performed better";
    } else if (arr[0] > arr[1]){
        cout << "Team 2 performed better";
    } else cout << "Both teams performed equally";
    return 0;
}