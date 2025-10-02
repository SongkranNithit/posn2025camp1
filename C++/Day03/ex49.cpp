#include <bits/stdc++.h>
using namespace std;
#define long long int;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int n,sumo=0,sume=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (i % 2 ==0){
            sumo += arr[i];
        } else sume += arr[i];
    }
    cout << max(sumo,sume);
    return 0;
}