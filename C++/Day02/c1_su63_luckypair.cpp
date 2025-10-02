#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n,ln,c=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> ln;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i] + arr[j] == ln){
                cout << arr[i] << " " << arr[j] << endl;
                c++;
            }
    }
    }
    if (c == 0){
        cout << "no";
    }
    return 0;
}
